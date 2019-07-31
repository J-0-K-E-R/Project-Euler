#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    long long number = 600851475143, factor = 2;
    while(number > factor)
    {
        if (number % factor == 0)
        {
            number = number/factor;
            factor = 2;
        }
        else
            factor++;
    }
    cout << "Largest prime factor of the number 600851475143 is " << number;
}




/*
Used Algorithm is as follows.
One way you can solve this problem is to use a loop that always finds the smallest (positive integer) factor of a number. When the smallest factor of a number is that number, then you've found the greatest prime factor!

Detailed Algorithm description:

You can do this by keeping three variables:

The number you are trying to factor (A)
A current divisor store (B)
A largest divisor store (C)
Initially, let (A) be the number you are interested in - in this case, it is 600851475143.
Then let (B) be 2. Have a conditional that checks if (A) is divisible by (B). If it is divisible, divide (A) by (B), reset (B) to 2, and go back to checking if (A) is divisible by (B).
Else, if (A) is not divisible by (B), increment (B) by +1 and then check if (A) is divisible by (B).
Run the loop until (A) is 1. The (3) you return will be the largest prime divisor of 600851475143.

There are numerous ways you could make this more effective - instead of incrementing to the next integer, you could increment to the next necessarily prime integer, and instead of keeping a largest divisor store, you could just return the current number when its only divisor is itself.
*/
