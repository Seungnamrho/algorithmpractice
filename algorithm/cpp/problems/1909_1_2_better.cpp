#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned long long  N;
    cin >> N;
    string val = (N == ((-N) & N)) ? "Yes" : "No";
    cout << val;
}
