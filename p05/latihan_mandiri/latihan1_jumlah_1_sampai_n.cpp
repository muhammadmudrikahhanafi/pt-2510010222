
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int total = 0;

    cout << "Masukkan n: ";
    cin >> n;

    if (n < 1) {
        cout << "n harus minimal 1.\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        total += i;
    }

    cout << "Jumlah 1 sampai " << n << " = " << total << "\n";

    return 0;
}
