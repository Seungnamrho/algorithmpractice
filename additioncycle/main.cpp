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
    int INF = 987654321;
    int len = t.length();
    vector<int> dp(t.length(), INF);
    set<string> str_set(strs.begin(), strs.end());
    dp[len] = 0;
    for(int i = len-1; i>=0; i--) {
        string temp = "";
        for(int j=0; j<5 && i+j<len; j++) {
            temp += t[i+j];
            if(str_set.find(temp) != str_set.end() && dp[i+j+1] != INF) {
                dp[i] = min(dp[i], dp[i+j+1] + 1);
            }
        }
    }
    return dp[0] == INF ? -1 : dp[0] ;
}
int main(int argc, const char * argv[]) {
    vector<string> pieces = {"app","ap","p","l","e","ple","pp"};
    string goal = "apple";
    cout << solution(pieces, goal);
    return 0;
    
}
