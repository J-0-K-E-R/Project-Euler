#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int sum_of_squares = 0, sum = 0, N = 100;
    sum = N * (N+1)/ 2;
    sum_of_squares = (N * (N + 1) * (2 * N + 1)) / 6;
    cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is " << ((sum * sum) - sum_of_squares) << ".";
    return 0;
}
