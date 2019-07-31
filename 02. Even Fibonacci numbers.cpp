#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int sum = 2, first = 1, second = 2, number;
    while(1)
    {
        number = first + second;
        if (number < 4000000)
            {
                if (number % 2 == 0)
                    sum = sum + number;
            }
        else
            break;
        first = second;
        second = number;
    }
    cout << "Sum of all the even-valued terms in the Fibonacci sequence whose values do not exceed four million is " << sum;
    getch();
    return 0;
}
