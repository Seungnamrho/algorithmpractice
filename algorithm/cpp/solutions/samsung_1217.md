# 문제

[[S/W 문제해결 기본] 4일차 - 거듭 제곱](https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14dUIaAAUCFAYD)

# 코드

```cpp
#include<iostream>

using namespace std;

int power(int N, int M, int current) {
	if (M == 0) return current;
	return power(N, M - 1, current * N);
}

int main(int argc, char** argv)
{
	int test_case;
	int T = 10;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int id, N, M;
        cin >> id >> N >> M;
        cout << "#" << id << ' ' <<  power(N, M, 1) << '\n';
	}
	return 0;
}
```

# 문제 해결 방법

꼬리재귀(tail recursion)을 이용했다. 일반적인 재귀는 return된 값에 어떤 추가적인 연산을 하기 때문에 함수가 돌아갈 주소값을 기억하고 있어야 한다. 그러나 꼬리재귀는 추가적인 연산을 하지 않기 때문에 돌아갈 주소를 기억해 둘 필요가 없다. 컴파일러 차원에서 반복문으로 최적화가 되기 때문에 효율적인 재귀 코드 작성 방법이라고 할 수 있겠다.

# 배운 점

꼬리재귀를 이용하기 위해서는 누적된 값을 계속 argument로 전달해 주어야 한다는 점
