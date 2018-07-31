//
//  main.cpp
//  additioncycle
//
//  Created by SN Rho on 29/07/2018.
//  Copyright © 2018 SN Rho. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <math.h>

using namespace std;

int solution(vector<vector<int>> board)
{
    unsigned long num_row = board.size();
    unsigned long num_col = board[0].size();
    int result = 0;
    int dp[num_row][num_col];
    for(int j=0; j<num_col; j++) {
        dp[0][j] = board[0][j];
    }
    
    for(int i=1; i<num_row; i++) {
        int maximum = 0;
        for(int j=0; j<num_col; j++) {
            int a, b, c;
            a = (j+1) % 4;
            b = (j+2) % 4;
            c = (j+3) % 4;
            maximum = max(max( dp[i-1][a], dp[i-1][b]), dp[i-1][c]);
            dp[i][j] = maximum + board[i][j];
        }
    }
    for(int j=0; j<num_col; j++) {
        result = max(result, dp[num_row-1][j]);
    }
    
    return result;
}
//원래 문제는 위에서 내려오는 것이지만 코드 작성의 편의성과 가독성을 위해 올라오는 것으로 문제를 임의로 변경하겠다.
int main(int argc, const char* argv[]) {
    vector<vector<int>> board = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {3, 2, 4, 1},
        {1, 3, 4, 2}
    };
    cout << solution(board);
  
    return 0;
}
