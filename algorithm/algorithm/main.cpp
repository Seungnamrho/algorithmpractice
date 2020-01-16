/*
 
 10 11 0 0 0 0 0 0 0 0 0
 0 11 10 0 0 0 0 0 0 0 0
 0 3 20 7 0 1 0 0 0 0 0
 3 0 0 9 8 0 0 0 0 0 0
 0 0 0 17 2 15 0 0 0 0 0
 0 0 13 11 0 19 2 0 0 0 0
 2 1 5 4 0 0 0 0 0 0 10
 0 0 0 0 0 0 15 14 0 0 0
 0 0 0 0 0 0 0 0 3 7 2
 0 0 0 0 0 0 9 4 1 10 15
 0 0 0 0 10 1 0 5 19 7 0
 
 **/
#include <iostream>
#include <stack>
#define SIZE 11
using namespace std;

int main(int argc, const char * argv[]) {
    stack<int> st;
    int arr[SIZE][SIZE];
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> arr[i][j];
        }
    }
    
    while (!st.empty()) {
        
    }
    
}
