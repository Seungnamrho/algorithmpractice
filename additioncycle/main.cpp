//
//  main.cpp
//  additioncycle
//
//  Created by SN Rho on 29/07/2018.
//  Copyright © 2018 SN Rho. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <array>
using namespace std;

int solution(vector<string> strs, string t)
{
    set<string> str_set(strs.begin(), strs.end());
    const int INF = 987654321;
    vector<int> dp(20002, INF);
    int len = t.length();

    dp[len] = 0;
    
    for(int i=len-1; i>=0; i--) {
        string tmp = "";
        for(int j=0; j<5 && i+j<len; j++) {
            tmp += t[i+j];
            if(str_set.find(tmp) != str_set.end() && dp[i+j+1] != INF) {
                dp[i] = min(dp[i], dp[i+j+1] + 1);
            }
        }
    }
    if(dp[0] == INF) {
        return -1;
    }else {
        return dp[0];
    }
}

int main(int argc, const char * argv[]) {
    vector<string> pieces = {"app","ap","p","l","e","ple","pp"};
    string goal = "apple";
    cout << solution(pieces, goal);
    return 0;
    
}
