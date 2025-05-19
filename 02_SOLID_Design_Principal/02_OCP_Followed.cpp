#include<iostream>
#include<string>

using namespace std;

class Calculator{
    private:
        int num1;
        int num2;
    public:
        Calculator(int first, int second){
            this->num1 = first;
            this->num2 = second;
        }
};