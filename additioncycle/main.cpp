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




vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;

    int ax = v[0][0];
    int ay = v[0][1];
    int bx = v[1][0];
    int by = v[1][1];
    int cx = v[2][0];
    int cy = v[2][1];
    
    if(ax == bx){
        ans.push_back(cx);
    }else if(bx == cx) {
        ans.push_back(ax);
    }else {
        ans.push_back(bx);
    }
    
    if(ay == by){
        ans.push_back(cy);
    }else if(by == cy) {
        ans.push_back(ay);
    }else {
        ans.push_back(by);
    }
    return ans;
}


int main(int argc, const char* argv[]) {
    vector<vector<int>> v = {{4,1}, {4,4}, {1,4}};
    vector<int> res = solution(v);
    cout << res[0] <<", " << res[1] << endl;
    return 0;
}
