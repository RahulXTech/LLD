#include<iostream>
#include<string>

using namespace std;

class DepositOnlyAcc{
    public:
        virtual void deposit(double amount) =0; //pure virtual function.
};
class WithDrawalAbleAcc : public DepositOnlyAcc{
    public:
        virtual void withdrawl(double amount) = 0; //pure virtual funciton.
        void deposit() override{
        }
};
//It can do fixed or deposite.
class SavingAccoutn : public WithDrawalAbleAcc{
        private:
            int Amoutn;
            SavingAccoutn(){
                Amoutn = 0;
            }
        void withdrawl(int Cash) override{
            if(Amoutn => Cash){
                Amoutn-=Cash;
            cout<<"you cash has been withdrawal in your saving account : "<<Cash<<endl;
            }else{
                cout<<"Your accoutn have no suficiant amount try again"<<endl;
            }
         };
        void deposit(int Cash) override{
            if(Cash=>0){
                Amoutn+=Cash;
                cout<<"Your amoutn has been deposit in savingAcc : "<<Cash<<endl;
            }else{
                cout<<"Invalid number"<<endl;
            }
        };
};
//It can do fixed or deposti
class currentAccoutn : public WithDrawalAbleAcc{
        void withdrawl() override{
            cout<<"you cash has been withdrawal in your current account"<<endl;
        };
        void deposit() override{
            cout<<"you cash has been deposit in your current account"<<endl;
        };
};
//It can do only fixed
class fixedDeposite : public DepositOnlyAcc{
    public:
        void deposit() override{
          cout<<"you cash has been deposit in your fixed deposit account"<<endl;
        };
};
int main(){


    return 0;
};