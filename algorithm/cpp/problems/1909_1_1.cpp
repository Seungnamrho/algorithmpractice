#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int>::iterator it;
    int count = 0;
    vector<int> pool;
    for (int i = 0; i < 4; ++i) {
        int temp;
        cin >> temp;
        pool.push_back(temp);
    }
    for (int i = 0 ; i <5; ++i ){
        int input;
        cin >> input;
        it = find(pool.begin(), pool.end(), input);
        if (it != pool.end()) {
            count++;
        }
    }
    cout << 5 -count;
}
