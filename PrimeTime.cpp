#include <iostream>

using namespace std;

bool checkIfPrime(int number, int divider) {
    if (divider == 1)
        return true;

    if (number % divider == 0)
        checkIfPrime(number, divider - 1);

    else {
        return false;
    }
}



int main()
{
    cout << checkIfPrime(7,6) << endl;
}
