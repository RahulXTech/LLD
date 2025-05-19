#include<iostream>
#include<string>
#include<vector>

using namespace std;
//Single responsibility principal.
//Each class has only one one responsibility.
 //It will be only one resbonsibility to handle the DATA.
class Student{
    public:
        string name;

        Student(string n){
            name = n;
        };
        void displayStudentInfo(){
            cout<<"Student name is : "<<name<<endl;
        };
};
//It will be only save the data in DATABASE.
class StudnetDataBase{
    public:
        void DataSave(Student ss){
            cout<<"Your Data has been save in DB : "<< ss.name;
        }
};
int main(){
        Student stu("Rahul_kumar");
        stu.displayStudentInfo();

        StudnetDataBase stuDB;
        stuDB.DataSave(stu);

    return 0;
}