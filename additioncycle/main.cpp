#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <set>

using namespace std;


int main(int argc, const char * argv[]) {
    int a, b, res;
    cin >> a >> b;
   
    vector<int> temp;
    while(a != 0) {
        temp.push_back(a % 10);
        a /= 10;
    }
    a = temp[0]*100 + temp[1]*10 + temp[2];
    temp.clear();
    
    while(b != 0) {
        temp.push_back(b % 10);
        b /= 10;
    }
    b = temp[0]*100 + temp[1]*10 + temp[2];
    res = a > b? a : b;
    cout << res;
    
//    vector<int>::reverse_iterator rev_it;
//    for(rev_it=temp.rbegin(); rev_it!= temp.rend(); rev_it++) {
//        cout << *rev_it << endl;
//    }
    
}
