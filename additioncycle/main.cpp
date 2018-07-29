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


int main(int argc, const char* argv[]) {
    int N;
    cin >> N;
    vector<int> arr;
    stack<int> int_stack;
    int res = 0;
    while(N != 0) {
        int temp = N % 10;
        int_stack.push(temp);
        N /= 10;
    }
    while(!int_stack.empty()) {
        int temp = int_stack.top();
        arr.push_back(temp);
        int_stack.pop();
    }
    for(int i=0; i<arr.size(); i++) {
        res += arr[i];
    }
    cout << res;
}


