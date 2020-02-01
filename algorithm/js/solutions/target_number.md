# 문제

[프로그래머스 테스트 - 타겟 넘버](https://programmers.co.kr/learn/courses/30/lessons/43165)

# 코드

```js
let answer = 0;

function solution(numbers, target) {
	dfs(numbers, target, 0, 0);
	return answer;
}

function dfs(numbers, target, acc, idx) {
	if (idx >= numbers.length) {
		if (target === acc) answer++;
		return;
	}
	dfs(numbers, target, acc + numbers[idx], idx + 1);
	dfs(numbers, target, acc - numbers[idx], idx + 1);
}

// 코드 실행 부분
const numbers = [1, 1, 1, 1, 1];
const target = 3;
solution(numbers, target);
```

# 문제 해결 방법

전형적인 `DFS(Depth First Search)` 문제이다.  
거의 brute force라고 해도 무방하지만, 이 문제의 특성상 모든 케이스를 훑어 보아야 하는 것은 맞기 때문에 어쩔 수가 없는 부분이다.

`numbers` 배열에는 정수들이 담겨 있고, 이 element들을 더하거나 빼서 `target`과 같은 값을 가지는 경우는 몇 가지 인지를 count하는 문제인데, 주의해야 할 점은 **모든 element들**을 다 사용해야 한다는 것이다.

시작하는 index를 0으로 잡고, `acc`라는 argument를 두어서 이 값이 target과 같아질 때 answer의 값을 1 증가시킨다. 이 작업을 idx와 acc를 변경시켜 가며 반복한다.

# 배운 점
