#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 3; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum = sum + i;
    }
    cout << "Sum of all the multiples of 3 or 5 below 1000 is " << sum;
    getch();
    return 0;
}
