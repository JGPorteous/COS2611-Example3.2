#include <iostream>

using namespace std;

int main()
{
    int *p;
    int num1 = 5;
    int num2 = 8;

    p = &num1; // p = address of num1

    cout << "First cycle - &num1 = " << &num1
        << ", p = " << p << endl;
    cout << "    num1 = " << num1
        << ", *p = " << *p << endl;

    p = &num2; //p = address of num2

    cout << "Second cycle - &num2 = " << &num2
        << ", p = " << p << endl;
    cout << "    num1 = " << num1
        << ", *p = " << *p << endl;  //*p = the value of the variable which p points to

    *p = 2 * (*p);  // this means the variable p points to equals 2 times the variable p points to
                    // equiv: num2 = 2 * num2;

    cout << " Final cycle - num2 = " << num2
        << ", *p = " << *p << endl;



    cout << "Hello world!" << endl;
    return 0;
}
