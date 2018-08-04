#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>

using namespace std;
double pyuncha(vector<int> k_dolls) {
    long sum = 0;
    double avg = 0.0;
    unsigned long len = k_dolls.size();
    double diff_sum = 0.0;
    double result = 0.0;
    for(int i=0; i<len; i++) {
        sum += k_dolls[i];
    }
    //이렇게 casting해줄 때 sum+0.00000001해주었는데.. 89%에서 계속 틀리더라. 부동소수점 연산에 대해 더 공부하자.
    avg = static_cast<double>(sum) /static_cast<double>(len);
    for(int i=0; i<len; i++) {
//        diff_sum += (avg-static_cast<double>(k_dolls[i]))*(avg-static_cast<double>(k_dolls[i]));
        diff_sum += pow(avg-static_cast<double>(k_dolls[i]), 2.0);
    }
    result = sqrt(diff_sum / static_cast<double>(len));
    return result;
}
int main() {
    //N은 총 인형의 종류, K는 표준편차를 확인하기 위해 뽑을 인형들.
    int N, K;
    cin >> N >> K;
    vector<int> dolls;
    double answer = INFINITY;
    int temp;
    for(int i=0; i<N; i++) {
        cin >> temp;
        dolls.push_back(temp);
    }
    //practice
    //이 p때문에 존나 고생함.
    for(int p=K; p<=N; p++) {
        for(int i=0; i<=N-p; i++) {
            vector<int> k_dolls;
            for(int j=0; j<p; j++) {
                k_dolls.push_back(dolls[i+j]);
            }
            answer = min(answer, pyuncha(k_dolls)+0.00000001);
        }
    }
   
    cout << fixed <<setprecision(11) << answer << endl;
}





