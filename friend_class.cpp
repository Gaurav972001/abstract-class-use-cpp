#include <iostream>
using namespace std;

class Example
{
private:
    int age;

public:
    Example(int age) : age(age) {}
    void print()
    {
        cout << "This is Example Class" << endl;
    }
    friend class FriendClass;
};

class FriendClass
{
public:
    void getAge(Example obj)
    {
        cout << obj.age << endl;
    }
};

int main()
{
    Example e(10);
    FriendClass f;
    f.getAge(e);
}