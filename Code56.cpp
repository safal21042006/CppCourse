//WAF TO PRINT ALL PRIME NUMBERS FROM 2 TO N
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) return false;
    }
    return true;
}

// Function to print all prime numbers from 2 to n
void printPrimes(int n) {
    if (n < 2) {
        cout << "No prime numbers in this range." << endl;
        return;
    }

    cout << "Prime numbers from 2 to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printPrimes(n);
    return 0;
}

