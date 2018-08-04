#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>


using namespace std;
//각각의 체크포인트들이다. x좌표와 y좌표, 그리고 HP와 부스터가 충전된 적이 있는지를 나타내는 불 변수를 가지고 있다.
struct checkpoint {
    int x;
    int y;
    bool HPcharged = false;
    bool boostercharged = false;
};

struct character {
    int currentX;
    int currentY;
    double HP;
    bool isBoosterAvailable = true;
};
int canReach(vector<checkpoint> checkpoints, int from, int to) {
    //boster 사용해서 reachable한지
    if(checkpoints[from].x == checkpoints[to].x || checkpoints[from].y == checkpoints[to].y) {
        return 1;
    }
    return 0;
}
int main() {
    //N은 총 체크포인트의 수, Q는 질의의 수
    int N, Q;
    cin >> N >> Q;
    int tempx, tempy;
    int startCP, endCP, X;
    bool dp_table[N+1][N+1];
    //checkpoint checkpoints[N+1];
    vector<checkpoint> checkpoints(N+1);
    //0번째 checkpoint는 무한대로 초기화 -> 없는 걸로 만든다.
    checkpoints[0].x = INFINITY;
    checkpoints[0].y = INFINITY;
    
    //checkpoint들을 다 초기화한다.
    for(int i=1; i<=N; i++) {
        cin >> tempx >> tempy;
        checkpoints[i].x = tempx;
        checkpoints[i].y = tempy;
    }
    
    //각각의 case들.
    for(int i=0; i<Q; i++) {
        //예시 input.. startCP ->1 endCP ->5 X->0
        cin >> startCP >> endCP >> X;
        character seungnam;
        //직접 부스터로 이동 가능한지
        
        for(int j=1; j<N+1; j++) {
            for(int k=1; k<N+1; k++) {
                dp_table[j][k] = canReach(checkpoints, j, k);
            }
        }
        //seungnam은 지금 체크포인트 1인 1,2에 있고 HP는 0이다. 체크포인트 5인 3, 9로 가야만 한다.
        //(1, 2) (3, 2) (4, 4) (6, 2) (3, 9) 이다 차례로.
        seungnam.currentX = checkpoints[startCP].x;
        seungnam.currentY = checkpoints[startCP].y;
        seungnam.HP = X;
    }
}





