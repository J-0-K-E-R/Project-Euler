#include <iostream>
#include <conio.h>
using namespace std;

// Brute force approach. A better approach to it is LCM way which is implemented at the end of this file.

int main()
{
    int i = 20;
    while(1)
    {
        if (i % 2 == 0 && i % 3 == 0 && i % 4 == 0 && i % 5 == 0 && i % 6 == 0 && i % 7 == 0 && i % 8 == 0 && i % 9 == 0 && i % 10 == 0 && i % 11 == 0 && i % 12 == 0 && i % 13 == 0 && i % 14 == 0 && i % 15 == 0 && i % 16 == 0 && i % 17 == 0 && i % 18 == 0 && i % 19 == 0 && i % 20 == 0)
            break;
        i++;
    }
    cout << "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is " << i;
}




/*
C++ program to find smallest number evenly divisible by all numbers 1 to n


#include<bits/stdc++.h>
using namespace std;

// Function returns the LCM of first n numbers
long long lcm(long long n)
{
    long long ans = 1;
    for (long long i = 1; i <= n; i++)
        ans = (ans * i)/(__gcd(ans, i));
    return ans;
}

int main()
{
    long long n = 20;
    cout << lcm(n);
    return 0;
}
*/
