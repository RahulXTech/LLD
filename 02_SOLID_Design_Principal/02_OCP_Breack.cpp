#include<iostream>
#include<string>

using namespace std;
// This program is breaking the open close principle because all function / method created in a single class to perform multiple work.

class ShopingCard{ 
    private: 
        int time;
    public:
    //constructor
    ShopingCard(){
        time = 10;
    };
  
    void saveToSQL(){
        cout<<"Your data will be save in "<<time<<" minuts in SQL"<<endl;
    };
    void saveToDB(){
        cout<<"Your data will be save in "<<time<<" minuts in DATABASE"<<endl;
    };
    void saveToFile(){
        cout<<"Your data will be save in "<<time<<" minuts in File"<<endl;
    };
    void saveToMongoDB(){
        cout<<"Your data will be save in "<<time<<" minuts in mongoDB"<<endl;
    };
  void display(){
        saveToFile();
        saveToMongoDB();
        saveToSQL();
        saveToDB();
    };

};
int main(){

ShopingCard card;
card.display();

    return 0;
};