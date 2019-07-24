#include <iostream>
#include <conio.h>
using namespace std;

int isPalindrome(int num)
{
    int n, digit, rev = 0;
    n = num;
    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    if (n == rev)
        return 1;
    else
        return 0;
}


/*
In this we're calculating multiplication of all of the three digit numbers.
As we know that there has to be a palindrome multiplication of two number between 900-999, so we can limit our loop to this range also but for a sure and general answer we should loop through all of numbers.
*/


int main()
{
     int i=999, j, product, max = 0, n1 = 0, n2 = 0;
     for (i ; i > 100 ; i--)
     {
        for (j = 999 ; j > 100 ; j--)
        {
            product = i * j;
            if (isPalindrome(product))
            {
                if (product > max)
                {
                    max = product;
                    n1 = i;
                    n2 = j;
                }
            }
        }
     }
     cout << "The largest palindrome made from the product of two 3-digit numbers is " << max << " and the digits are " << n1 << "," << n2 << ".";
     getch();
     return 0;
}
