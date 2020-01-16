#include <iostream>
#include <vector>
using namespace std;
\
long long  getDistance(pair<int, int> pointA, pair<int, int> pointB );
int main(int argc, const char * argv[]) {
    // N은 사람의 수
    int N; cin >> N;
    long long maximum = -1;
    pair<int, int> maxPair = {-1, -1};
    vector<pair<int, int>> locations(N);
    for (int i = 0; i < N; ++i) {
        cin >> locations[i].first >> locations[i].second;
    }
    
    for (int i = 0; i < N -1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            long long  distance = getDistance(locations[i], locations[j]);
            if (distance > maximum) {
                maximum = distance;
                maxPair = {i + 1, j + 1};
            }
        }
    }
    
    cout << maxPair.first << " " << maxPair.second;
}

long long getDistance(pair<int, int> pointA, pair<int, int> pointB ) {
    long long diffX = (pointA.first - pointB.first);
    long long  diffY = (pointA.second - pointB.second);
    return diffX * diffX  +  diffY * diffY;
}