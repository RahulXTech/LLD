#include<iostream>
#include<string>

using namespace std;
//Also this code is flowing - Single responcibility principal.
//This class will be only store the DATA.
class DataBase{
    public:
        int num1 = 23;
        int num2 = 32;
};
// It will perform the sum opration on number.
class SumOfNumber{
    public:
        void Sum(DataBase data ){
            cout<<"Your sum of two numbe is : "<<data.num1+data.num2<<endl;
        }
};
//It will perform multiplicaon opration on number.
class Multiplication{
    public:
        int multiply(DataBase data){
            cout<<"Your multiplication of two number is : "<<data.num1*data.num2<<endl;
        }
};
//It will perform subtraton opratoin on number.
class Subtraction{
    public:
        int subtrac(DataBase data){
            cout<<"Your subtraction of two number is : "<<data.num1 - data.num2<<endl;
        }
};

int main(){
    //DataBase is here;
    DataBase data;

    SumOfNumber son;
    son.Sum(data);

    Multiplication mul;
    mul.multiply(data);
    
    Subtraction sub;
    sub.subtrac(data);

    return 0;
}