//
//  1909_1_2.cpp
//  algorithm
//
//  Created by Sam Rho on 2020/01/03.
//  Copyright © 2020 Sam Rho. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned long long  N;
    cin >> N;
    string val = (N == ((-N) & N)) ? "Yes" : "No";
    cout << val;
}
