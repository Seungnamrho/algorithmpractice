#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int solution(int n, vector<string> data) {
    char test2[8] =  {'A', 'C', 'F', 'J', 'M', 'N', 'R', 'T'};
    int count = 0;
    //n이 10개라 해보자.
    int num_of_conditions = n;
    //요까지 조건 잘 들어옴.
    //conditions = {"N~F=0", "R~T>2"};
    vector<string> conditions = data;
    do {
        for(int i=0; i<num_of_conditions; i++) {
            long first_idx = find(test2, test2+8, conditions[i][0]) - test2;
            long second_idx = find(test2, test2+8, conditions[i][2]) - test2;
            char op = conditions[i][3];
            int comp = conditions[i][4] - '0';
            
            if(op == '>') {
                if(abs(first_idx - second_idx) > comp+1) {
                    //do nothing
                } else {
                    break;
                }
            } else if(op == '=') {
                if(abs(first_idx - second_idx) == comp+1) {
                    //do nothing
                } else {
                    break;
                }
            } else {
                if(abs(first_idx - second_idx) < comp+1) {
                    //do nothing
                } else {
                    break;
                }
            }
            
            if(i == num_of_conditions-1){
               
                count ++;
            }
        }
    } while(next_permutation(test2, test2+8));
    return count;
}

//입력 예 -> num = 2, conds = N~F=0 띄우고 R~T>2
int main() {
    //conditions = {"N~F=0", "R~T>2"};
    int num =0;
    cin >> num;
    string temp = "";
    vector<string> conds;
    for(int i=0; i<num; i++) {
        cin >> temp;
        conds.push_back(temp);
    }
    cout << solution(num, conds);
}
