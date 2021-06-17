#include <iostream>

using namespace std;

bool checkIfPrime(int number) {
    bool ifPrime = true;

    for (int a = number - 1; a > 1; a--)
    {
        if (number % a != 0)
            ifPrime = false;
    }

    return ifPrime;
}



int main()
{
    cout << checkIfPrime(7);
}
