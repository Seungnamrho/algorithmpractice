//
//  1909_1_2.cpp
//  algorithm
//
//  Created by Sam Rho on 2020/01/03.
//  Copyright © 2020 Sam Rho. All rights reserved.
//

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
