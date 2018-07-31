//
//  main.cpp
//  additioncycle
//
//  Created by SN Rho on 29/07/2018.
//  Copyright © 2018 SN Rho. All rights reserved.
//

#include <iostream>
#include <vector>
#include <array>
#include <math.h>

using namespace std;

int solution(vector<int> sticker)
{
    int num = sticker.size();
    int dp[num], dp2[num];
    if(num == 1) {
        return sticker[0];
    } else if(num == 2) {
        return max(sticker[0], sticker[1]);
    } else if(num == 3) {
        return max(max(sticker[0], sticker[1]), sticker[2]);
    }
    //dp는 첫째 놈을 고르지 않았을 때
    dp[0] = 0;
    dp[1] = sticker[1];
    //dp2는 첫째 놈을 골랐을 때
    dp2[0] = sticker[0];
    dp2[1] = dp2[0];
    dp2[num-1] = 0;

    for(int i=2; i<num-1; ++i) {
        dp[i] = max(dp[i-1], dp[i-2] + sticker[i]);
        dp2[i] = max(dp2[i-1], dp2[i-2] + sticker[i]);
    }
    dp[num-1] =max(dp[num-2], dp[num-3] + sticker[num-1]);
    
    return max(dp[num-1], dp2[num-2]);
}

int main(int argc, const char* argv[]) {
    vector<int> sticker = {5,4,3, 7};
    
    cout << solution(sticker);
    return 0;
}
