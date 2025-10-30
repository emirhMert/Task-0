#include <iostream>
#include <vector>
using namespace std;

// Function to find all divisors of a number
vector<int> findDivisors(int number) {
    vector<int> divisors;
    int absNumber = abs(number); // Work with absolute value for divisors
    
    if (absNumber == 0) {
        cout << "Note: 0 has infinitely many divisors." << endl;
        return divisors;
    }
    
    for (int i = 1; i <= absNumber; i++) {
        if (absNumber % i == 0) {
            divisors.push_back(i);
        }
    }
    
    return divisors;
}

int main() {
    int num1, num2;
    
    // Read two integer numbers
    cout << "Enter the first integer: ";
    cin >> num1;
    
    cout << "Enter the second integer: ";
    cin >> num2;
    
    // Calculate sum, difference, and product
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    
    // Display results
    cout << "\n===== RESULTS =====" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "\nSum: " << num1 << " + " << num2 << " = " << sum << endl;
    cout << "Difference: " << num1 << " - " << num2 << " = " << difference << endl;
    cout << "Product: " << num1 << " * " << num2 << " = " << product << endl;
    
    // Find and display all divisors of the first number
    cout << "\nDivisors of " << num1 << ": ";
    vector<int> divisors = findDivisors(num1);
    
    if (!divisors.empty()) {
        for (int i = 0; i < divisors.size(); i++) {
            cout << divisors[i];
            if (i < divisors.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
