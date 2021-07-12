#include <iostream>
using namespace std;

// In oops, using function in another function is called nesting of member function
class Binary_check
{
    string var;

public:
    void input();
    void check();
    void swap();
};

void Binary_check::input()
{
    cout << "Please Enter binary number: ";
    cin >> var;
}

void Binary_check::check()
{
    for (int i = 0; i < var.length(); i++)
    {
        if (var[i] != '0' && var[i] != '1')
        {
            cout << "wrong binary number" << endl;
            exit(2);
        }
    }
}

void Binary_check::swap()
{
    check();
    for (int i = 0; i < var.length(); i++)
    {
        if (var[i] == '0')
        {
            var[i] = '1';
        }
        else
        {
            var[i] = '0';
        }
    }
    cout << "Binary numbers after swap: " << var << endl;
}

int main()
{
    Binary_check binary;
    binary.input();
    binary.swap();
    return 0;
}