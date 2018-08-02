#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int solution(int n, vector<string> data) {
    char test2[8] =  {'A', 'C', 'F', 'J', 'M', 'N', 'R', 'T'};
    sort(test2, test2+8);
    int count = 0;
    int num_of_conditions = n;
    vector<string> conditions = data;
    //string conditions[2] = {"J~C=1", "F~A>0"};
    do {
        for(int i=0; i<num_of_conditions; i++) {
            long first_idx = find(test2, test2+4,conditions[i][0]) - test2;
            long second_idx = find(test2, test2+4,conditions[i][2]) - test2;
            char op = conditions[i][3];
            int comp = conditions[i][4] - '0';
            
            if(op == '>') {
                
                if(abs(first_idx - second_idx) > comp+1) {
                    
                } else {
                    break;
                }
            } else if(op == '=') {
                if(abs(first_idx - second_idx) == comp+1) {
                    
                } else {
                    break;
                }
            } else {
                if(abs(first_idx - second_idx) < comp+1) {
                    
                } else {
                    break;
                }
            }
            
            if(i == num_of_conditions-1){
                cout << test2[0] << ' ' << test2[1] << ' ' << test2[2] << ' ' << test2[3] << endl;
                count ++;
            }
            
        }
        
    }while(next_permutation(test2, test2+4));
    
    cout << count << "개" << endl;
    return 0;
}


int main() {
    char test2[4] =  {'J', 'C', 'F', 'A',};
    sort(test2, test2+4);
    int count = 0;
    int num_of_conditions = 2;
    //string conditions[2] = {"J~C=1", "F~A>0"};
    vector<string> conditions = {"J~C=1", "F~A>0"};
//    do {
//        for(int i=0; i<num_of_conditions; i++) {
//            int first_idx = find(test2, test2+4,conditions[i][0]) - test2;
//            int second_idx = find(test2, test2+4,conditions[i][2]) - test2;
//            char op = conditions[i][3];
//            int comp = conditions[i][4] - '0';
//
//            if(op == '>') {
//
//                if(abs(first_idx - second_idx) > comp+1) {
//
//                } else {
//                    break;
//                }
//            } else if(op == '=') {
//                if(abs(first_idx - second_idx) == comp+1) {
//
//                } else {
//                    break;
//                }
//            } else {
//                if(abs(first_idx - second_idx) < comp+1) {
//
//                } else {
//                    break;
//                }
//            }
//
//            if(i == num_of_conditions-1){
//                cout << test2[0] << ' ' << test2[1] << ' ' << test2[2] << ' ' << test2[3] << endl;
//                count ++;
//            }
//
//        }
//
//    }while(next_permutation(test2, test2+4));
//
//    cout << count << "개" << endl;

    solution(2, conditions);
}
