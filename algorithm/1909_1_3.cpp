//
//  1909_1_2.cpp
//  algorithm
//
//  Created by Sam Rho on 2020/01/03.
//  Copyright © 2020 Sam Rho. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, S, me, goal;
    cin >> N >> S >> me;
    vector<int> abilities(N - 1, -1);
    goal = S - me;
    for (int i = 0; i < N - 1; ++i) {
        cin >> abilities[i];
    }
    sort(abilities.begin(), abilities.end());
    for (int i = 0; i < N - 1; ++i) {
        cout << abilities[i];
    }
                                                       
}
