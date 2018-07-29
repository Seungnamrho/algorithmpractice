//
//  main.cpp
//  additioncycle
//
//  Created by SN Rho on 29/07/2018.
//  Copyright © 2018 SN Rho. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int solution(long n) {
    long num = n;
    int count = 0;
    int res;
    while(num != 0){
        count += num % 10;
        num /= 10;
    }
    return count;
}

int main(int argc, const char* argv[]) {
    cout << solution(2342354624);
}
