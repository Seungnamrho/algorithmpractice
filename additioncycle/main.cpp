//
//  main.cpp
//  additioncycle
//
//  Created by SN Rho on 29/07/2018.
//  Copyright © 2018 SN Rho. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<long> slice(const vector<long>& v, int a, int b) {
    return vector<long>(v.begin() + a, v.begin() + b);
}

void printPostOrder(const vector<long>& preorder, const vector<long>& inorder) {
    const long N = preorder.size();
    if(preorder.empty()) {
        return;
    }
    const int root = preorder[0];
    const long L = find(inorder.begin(), inorder.end(), root) - inorder.begin();
    const int R = N - L - 1;
    printPostOrder(slice(preorder, 1, L+1), slice(inorder, 0, L));
    printPostOrder(slice(preorder, L+1, N), slice(inorder, L+1, N));
    cout << root <<' ';
}


int main(int argc, const char* argv[]) {
    vector<long> pre = {27, 16, 9, 12, 54, 36, 72};
    vector<long> in = {9, 12, 16, 27, 36, 54, 762};
    printPostOrder(pre, in);

}


