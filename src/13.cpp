#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "Hello, " << name << ". You are eligible to vote." << endl;
    } else {
        cout << "Sorry, " << name << ". You are not eligible to vote yet." << endl;
    }
    return 0;
}
