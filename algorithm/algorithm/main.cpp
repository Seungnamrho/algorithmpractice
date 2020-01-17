#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> commands) {
    vector<int> solution(commands.size(), -1);
    for (int i = 0; i < commands.size(); ++i) {
        int from = commands[i][0];
        int to = commands[i][1];
        int K = commands[i][2];
        vector<int> newVec(arr.begin() + from - 1, arr.begin() + to);
        sort(newVec.begin(), newVec.end());
        for (int j = 0 ; j < newVec.size(); ++j) {
            cout << newVec[j] << endl;
        }
        cout << "K: " << K << '\n';
        solution[i] = newVec[K - 1];
        
    }
    for (int i = 0 ; i < solution.size(); ++i) {
        cout << solution[i] << endl;
    }
    return {};
}

int main () {
    vector<int> arr = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int> > commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
     solution(arr, commands);
    return 0;
}
