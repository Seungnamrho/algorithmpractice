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
    
    int dab = (ax-bx)*(ax-bx) + (ay-by) * (ay-by) ;
    int dbc = (cx-bx)*(cx-bx) + (cy-by) * (cy-by) ;
    int dca = (ax-cx)*(ax-cx) + (ay-cy) * (ay-cy) ;
    
    int maximum = max((max(dab, dbc)), dca);
    if(maximum == dab) {
        return {ax+bx-cx, ay+by-cy};
    } else if (maximum == dbc) {
        return {bx+cx-ax, by+cy-ay};
    } else {
        return {ax+cx-bx, ay+by-by};
    }
}


int main(int argc, const char* argv[]) {
    vector<vector<int>> v = {{4,1}, {4,4}, {1,4}};
    vector<int> res = solution(v);
    cout << res[0] <<", " << res[1] << endl;
    return 0;
}
