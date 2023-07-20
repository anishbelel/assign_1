#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Swapping logic using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping, the numbers are:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
