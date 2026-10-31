
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan bilangan: ";
    cin >> n;

bool prima = true;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            prima = false;
            break;
        }
    }

    if (n < 2) {
        cout << n << " bukan bilangan prima." << endl;
    } else if (prima) {
        cout << n << " adalah bilangan prima." << endl;
    } else {
        cout << n << " bukan bilangan prima." << endl;
    }

    return 0;
}
