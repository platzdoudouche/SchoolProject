#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        for (int i = 1; i <= n; i++) {
            cout << i * i << " ";
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                cout << i * i << " ";
            }
        }
    }
    
    return 0;
}
