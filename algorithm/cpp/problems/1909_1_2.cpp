#include <iostream>

using namespace std;
int main() {
    unsigned long long  N;
    cin >> N;
    while (N != 1) {
        if (N % 2) {
            cout << "No";
            return 0;
        }
        N /= 2;
    }
    cout << "Yes";
}
