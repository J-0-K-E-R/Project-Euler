#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int &n)
{
    int x = sqrt(n);
    if (n % 2 == 0)
        return 0;
    for (int j = 3; j <= x ; j+=2)
        if (n % j == 0)
            return 0;
    return 1;
}

int main ()
{
	int number = 2, i = 1;
	while(i < 10001)
    {
        number++;
        if (isPrime(number))
        {
            i++;
        }
    }
    cout << "10001st Prime number is " << number << ".";
    return 0;
}



/**
There are not much methods to calculate the nth Prime. One I picked from Wikipedia gave an upper and lower bound but there're other primes in that and we can't be sure which one is the one we want.
That approach is as follows.
upper_bound = (position_number * (log(position_number) + (log(log(position_number)))));
lower_bound = (position_number * (log(position_number) + log(log(position_number)) - 1));
**/
