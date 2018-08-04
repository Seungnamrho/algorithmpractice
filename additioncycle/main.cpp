#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

int main() {
    int case_no = 0;
    cin >> case_no;
    int maximum = 0;
    int value = 0;
    for(int i=0; i<case_no; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b && b == c) {
            value = 10000 + a * 1000;
        } else if((a^b^c) == c) {
            value = 1000 + b * 100;
        } else if((a^b^c) == b) {
            value = 1000 + a * 100;
        } else if((a^b^c) == a) {
            value = 1000 + c * 100;;
        } else {
            value = max(max(a, b), c) * 100;
        }
        maximum = max(maximum, value);
    }
    cout << maximum;
}

