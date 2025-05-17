
# 🎓 Student Data Handler - Single Responsibility Principle in C++

This project is a simple C++ demonstration of the Single Responsibility Principle (SRP), one of the SOLID principles of object-oriented design. Each class in this example has a distinct, single responsibility — helping to keep the code modular, maintainable, and extendable.

## 📌 Purpose

To illustrate how SRP can be implemented in C++, this project defines two classes:

- Student — responsible solely for handling student data
- StudentDatabase — responsible solely for handling data storage (simulation)

---

## 📦 Project Structure

```
📁 StudentSRP/
├── main.cpp       # Main application logic
├── README.md      # Project documentation
```

---

## 🧾 Code Overview

main.cpp:

```cpp
#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Handles only student data
class Student {
public:
    string name;

    Student(string n) {
        name = n;
    };

    void displayStudentInfo() {
        cout << "Student name is : " << name << endl;
    };
};

// Handles only data storage
class StudnetDataBase {
public:
    void DataSave(Student ss) {
        cout << "Your Data has been save in DB : " << ss.name;
    }
};

int main() {
    Student stu("Rahul_kumar");
    stu.displayStudentInfo();

    StudnetDataBase stuDB;
    stuDB.DataSave(stu);

    return 0;
}
```

---

## ✅ Output

```
Student name is : Rahul_kumar
Your Data has been save in DB : Rahul_kumar
```

---

## 🔍 Key Concepts Demonstrated

- ✔ Single Responsibility Principle (SRP)
- ✔ Separation of concerns
- ✔ Class-based modularity in C++

---

## 📖 How to Run

1. Make sure you have a C++ compiler installed (e.g., g++)
2. Compile the program:
   ```
   g++ main.cpp -o studentApp
   ```
3. Run the executable:
   ```
   ./studentApp
   ```

---

## 🛠 Improvements

- Use proper spelling: Fix typo in StudnetDataBase → StudentDatabase
- Expand functionality (e.g., store multiple students, use file/database I/O)
- Add error handling and validation

---

## 🧠 Author

Rahul Kumar
