#include <iostream>
using namespace std;

// Base class
class Bird {
public:
    virtual void eat() {
        cout << "Bird is eating" << endl;
    }
};

// FlyableBird inherits from Bird
class FlyableBird : public Bird {
public:
    virtual void fly() {
        cout << "Bird is flying" << endl;
    }
};

// Sparrow can fly
class Sparrow : public FlyableBird {
public:
    void fly() override {
        cout << "Sparrow is flying" << endl;
    }
};

// Ostrich cannot fly, so inherits only from Bird
class Ostrich : public Bird {
public:
    void eat() override {
        cout << "Ostrich is eating" << endl;
    }
};

// Function that works only with flyable birds
void makeItFly(FlyableBird* bird) {
    bird->fly();
}

int main() {
    Sparrow sparrow;
    Ostrich ostrich;

    makeItFly(&sparrow);   // ✅ OK
    // makeItFly(&ostrich); // ❌ Compile error — prevents LSP violation

    return 0;
}
