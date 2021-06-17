#include <iostream>

using namespace std;

bool checkIfPrime(int number) {
    bool ifPrime = true;

    for (int a = number - 1; a > 1; a--)
    {
        if (number % a == 0)
            ifPrime = false;
    }

    return ifPrime;
}



int main()
{
    int b = 2;
    while (true) {
        if (checkIfPrime(b))
            cout << b << endl;
        b++;
        if (b > 1000)
            break;
    }
}
