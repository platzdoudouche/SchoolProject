#include <iostream>
using namespace std;

int main() {
    int num1 = 5;
    int num2 = 3;
    
    if (num1 > num2) {
        cout << "The first number is greater." << endl;
    } else if (num1 == num2) {
        cout << "Both numbers are equal." << endl;
    } else {
        cout << "The second number is greater." << endl;
    }
    
    return 0;
}
