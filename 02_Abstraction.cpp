#include<iostream>
#include<string>

using namespace std;

//Real life car.

class Car{
    public:
        virtual void starEngine() = 0;
        virtual void shiftGear(int ger) = 0;
        // virtual void skeletor() = 0;
        // virtual void brake() = 0;
        // virtual void stopEngine() = 0;
        // virtual ~Car() {}
};

class SportsCar : public Car{
    public:
        string brand;
        string model;
        bool isEngineOn;
        string color;

    SportsCar(string b, string m, string c){
        this->brand = b;
        this->model = m;
        isEngineOn = false;
        this->color = c;
    }
void starEngine(){
    isEngineOn = true;
    cout<<brand<<" "<<model << " : Engine starts with a roar!"<<endl;
}

void shiftGear(int ger){
    if(!isEngineOn){
        cout<<brand<<" "<<model <<" : Engine is off! Cannot Shirt gear."<<endl;
        return;
    }
}

};


//Main method
int main(){

Car* myCar = new SportsCar("mahindra","NEW2025","black");

myCar->shiftGear(4);
myCar->starEngine();


    return 0;
}