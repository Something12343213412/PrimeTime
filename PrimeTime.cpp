#include <iostream>

using namespace std;

// Put divider as number - 1 for function to work
bool checkIfPrime(int number, int divider) {
    if (divider == 1)
        return true;

    if (number % divider != 0)
        checkIfPrime(number, divider - 1);

    else {
        return false;
    }
}

// Put input to 1000 for the function to work
int checkFromOneToOneThousand(int number) {

    if (number == 1)
        return 0;
    
    if (checkIfPrime(number, number - 1) == true)
        cout << number;
    
    checkFromOneToOneThousand(number - 1);
}



int main()
{
    checkFromOneToOneThousand(1000);
}
