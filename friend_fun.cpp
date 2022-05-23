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
    friend void getAge(Example obj);
};

void getAge(Example obj)
{
    cout << obj.age << endl;
}

int main()
{
    Example e(10);
    getAge(e);
}