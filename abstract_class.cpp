#include <iostream>
using namespace std;

class Abstract
{
public:
    virtual void getName() = 0; // pure virtual function.

    void print()
    {
        cout << "This is Abstract Class" << endl;
    }
};

class Base1 : public Abstract
{
public:
    void getName()
    {
        cout << "This is the Base class 1" << endl;
    }
};

class Base2 : public Abstract
{
public:
    void getName()
    {
        cout << "This is the Base class 2" << endl;
    }
};

void printClassName(Abstract *obj)
{
    obj->getName();
}

int main()
{
    // static objects.
    Base1 b1;
    Base2 b2;
    printClassName(&b1);
    printClassName(&b2);

    // dynamic objects.
    Base1 *b11 = new Base1;
    Base2 *b22 = new Base2;
    printClassName(b11);
    printClassName(b22);
}