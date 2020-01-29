# 다이나믹 프로그래밍

## 다이나믹 프로그래밍이 무엇인가?

왠지 모르게 동적 계획법이라고 억지로 한글로 번역을 해 놓으면 어색함이 감도는 단어이다. 그냥 있는 그대로 dynamic programming(이하 DP)이라고 부르려고 한다.

DP에서 가장 중요한 것은 `캐싱을 통한 반복되는 계산 제거`이다.  
주로 재귀를 이용한 알고리즘에서

## 왜 이것이 필요한가?

프로그래밍을 하는 데 있어 가장 중요한 키워드 중 하나는 `DRY(Do not Repeat Yourself`, 즉 반복 제거인 것이다. 앞서 언급한 것처럼 특히 재귀적인 코드는 앞서 실행한 작업을 다시 수행하기 일쑤이기 때문에 DP를 비롯한 장치를 통해 효율성을 도모할 수 있게 되는 것이다. 그렇기 때문에 DP는 매우 중요하다.

## 코드 예시

![](https://www.geeksforgeeks.org/wp-content/uploads/Dynamic-Programming-1.png)
fibonacci()함수를 계속해서 실행해 나가면, 반복되는 것이 걷잡을 수 없이 많아진다. 이때 배열에 해당하는 순서의 값을 저장(캐싱)해 두면 효율성이 제고된다.

## 출처

https://www.geeksforgeeks.org/dynamic-programming/
