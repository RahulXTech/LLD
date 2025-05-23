#include<iostream>
#include<string>
using namespace std;
class Card{
    private:
};
class ShopinCard{
    public:
        virtual void Save() = 0;
};

class SaveToDB : public ShopinCard{
    public:
       void Save() override{
            cout<<"Your Data has been save in DataBase (Successfully) "<<endl;
        }
};
class saveToSQL: public ShopinCard{
    public:
       void Save() override{
            cout<<"Your data has been save in SQL (Successfully)"<<endl;
        }      
};
class saveToFile : public ShopinCard{
    public:
        void Save() override{
            cout<<"Your data has been save in file"<<endl;
        }
};
int main(){
saveToSQL SQL;
SQL.Save();
SaveToDB DB;
DB.Save();
saveToFile file;
file.Save();
    return 0;
}