#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <set>

using namespace std;
//returns true if matched
int match(vector<string>& board, char ch) {
    vector<pair<int, int>> grid;
    
    //grid array에 두 좌표 (a,b) & (c,d) 넣는다.
    for(int i=0; i<board.size(); i++) {
        for(int j=0; j<board[0].length(); j++) {
            if(board[i][j] == ch) {
                grid.push_back(make_pair(i,j));
            }
        }
    }
    int row1, row2, col1, col2;
    row1 = min(grid[0].first, grid[1].first);
    col1 = min(grid[0].second, grid[1].second);
    row2 = max(grid[0].first, grid[1].first);
    col2 = max(grid[0].second, grid[1].second);
   
    for(int i=row1; i<=row2; i++) {
        if(board[i][col2] == ch || board[i][col2] == ch || board[i][col1] == ch ) {
            
        }
    }
    
    
    for(int i=0; i<grid.size(); i++) {
        cout << grid[i].first <<", " << grid[i].second <<endl;
    }
    
    return 1;
}
string solution(vector<string> board) {
    string res = "";

    set<char> alphabet_set;
    set<char>::iterator iter;
    unsigned long height = board.size();
    unsigned long width = board[0].length();
    //set에 모든 alphabet들을 넣어서 alphabetical order로 sort한다. -> sort가 원래 되어 있다.
    for(int i=0; i<height; i++) {
        for(int j=0; j<width; j++) {
            if(isalpha(board[i][j])) {
                alphabet_set.insert(board[i][j]);
            }
        }
    }
    //did not know that a set doesn't support sort()
    //sort(alphabet_set.begin(), alphabet_set.end());
    
    //순서대로 set에 있는 element들을 print한다.
    
    
    //반복분 시작
    int death_count = 50;
    while(!alphabet_set.empty() && death_count>=0) {
        for(iter = alphabet_set.begin(); iter != alphabet_set.end(); iter++) {
            cout << *iter << endl;
            if(match(board, *iter)) {
                res += *iter;
                alphabet_set.erase(iter);
                break;
            }
        }
        death_count--;
    }
    return "";
}

int main(int argc, const char * argv[]) {
    //m -> 행의 수, n -> 열의 수
   // int m = 4, n = 4;
    const vector<string> gameboard = {
        ".ZI.",
        "M.**",
        "MZU.",
        ".IU."
    };
    cout << solution(gameboard) << endl;
}
