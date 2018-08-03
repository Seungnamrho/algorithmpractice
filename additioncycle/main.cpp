#include <iostream>
#include <vector>
#include <string>
//#include <algorithm>
#include <math.h>


using namespace std;

int n,m;
vector<double> v;

int binary_search(const vector<int> num, int target) {
    int left = 0;
    int len = num.size();
    int right = len-1;
    while(left < right) {
        int mid = (left+right) / 2;
        if(num[mid] < target) {
            left = mid+1 ;
        } else {
            right = mid;
        }
    }
    return left;
}

int main()
{
    vector<int> numbers;
    for(int i=0; i<10; i++) {
        numbers.push_back(i);
    }
    cout << binary_search(numbers, 7);
    
}
