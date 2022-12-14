#include <iostream>
using namespace std;
// In this example we will see call value concept
void swap(int, int); // function prototype

int main()
{
    int a = 4, b = 5;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swap(a, b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}

void swap(int num1, int num2)
{                    // temp   num1    num2
    int temp = num1; // 4      4        5
    num1 = num2;     // 4      5        5
    num2 = temp;     // 4      5        4
}