#include<iostream>
#include<string>

using namespace std;

class Shape{
    public:
        virtual void area() = 0;
        virtual void sizeOfBorder() = 0;

    void Display(){
        area();
        sizeOfBorder();
    };
    };
//This derived class will measuare the circle radiuse and border size.
class Circle : public Shape{
    private:
        int radiuse;
        int borderSize;
    public:
      Circle(){
            radiuse = 300;
            borderSize = 2;
        }
        void area() override{
            cout<<"Your radiuse of circle is : "<<radiuse<<endl;
        }
        void sizeOfBorder() override{
            cout<<"Your circle border size is : "<<borderSize<<endl;
        }
};

class Rectangle : public Shape{
    private:
        int height;
        int width;
    public:
        Rectangle(){
            height = 10;
            width = 22;
        };

        void area() override{
            cout<<"your Rectangle size is : "<<height*width;
        }
        void sizeOfBorder() override{};//IT's complusory to override the virtual function. otherwise It will show erro.
};

//This is the main class of c++ fist priority.
int main(){

Circle circles;
circles.Display();

Rectangle rec;
rec.area();

    return 0;
};