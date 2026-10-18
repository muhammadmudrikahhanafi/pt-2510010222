
#include <iostream>
using namespace std;

int main() {
    double nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    switch (static_cast<int>(nilai) / 10) {
        case 10:
        case 9:
        case 8:
            cout << "Huruf mutu: A" << endl;
            break;

        case 7:
            cout << "Huruf mutu: B" << endl;
            break;

        case 6:
            cout << "Huruf mutu: C" << endl;
            break;

        default:
            cout << "Huruf mutu: D" << endl;
    }

    return 0;
}
