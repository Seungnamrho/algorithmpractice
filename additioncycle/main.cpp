#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

int main() {
    int case_no;
    int a, b;
    int first[101] = {0, };
    int second[65] = {0, };
    first[1] = 500;
    second[1] = 512;
    for(int i=2; i<4; i++) {
        first[i] = 300;
    }
    for(int i=4; i<7; i++) {
        first[i] = 200;
    }
    for(int i=7; i<11; i++) {
        first[i] = 50;
    }
    for(int i=11; i<16; i++) {
        first[i] = 30;
    }
    for(int i=16; i<22; i++) {
        first[i] = 10;
    }
    for(int i=2; i<4; i++) {
        second[i] = 256;
    }
    for(int i=4; i<8; i++) {
        second[i] = 128;
    }
    for(int i=8; i<16; i++) {
        second[i] = 64;
    }
    for(int i=16; i<32; i++) {
        second[i] = 32;
    }
    cin >> case_no;
   
    
    for(int j=0; j<case_no; j++) {
        cin >> a >> b;
        cout << (first[a] + second[b])*10000 << endl;
    }
}

