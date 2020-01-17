# 문제

[프로그래머스 테스트 - 모의고사](https://programmers.co.kr/learn/courses/30/lessons/42840)

# 코드

```js
function solution(answers) {
	const counter = { a: 0, b: 0, c: 0 };
	const RULE_A = [1, 2, 3, 4, 5];
	const RULE_B = [2, 1, 2, 3, 2, 4, 2, 5];
	const RULE_C = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];

	answers.forEach((answer, idx) => {
		if (answer === RULE_A[idx % 5]) counter.a++;
		if (answer === RULE_B[idx % 8]) counter.b++;
		if (answer === RULE_C[idx % 10]) counter.c++;
	});
	let max = -1;
	Object.keys(counter).forEach((key) => {
		max = counter[key] > max ? counter[key] : max;
	});
	const reducer = (acc, key, idx) =>
		counter[key] === max ? acc.concat(idx + 1) : acc;

	const result = Object.keys(counter).reduce(reducer, []);
	return result;
}
```

# 문제 해결 방법

일단 각 학생들이 맞힌 문제 수를 저장하기 위해 객체를 하나 만듭니다. 이 객체의 property는 `a`, `b`, `c`로 학생 A, B, C의 맞힌 문제 수를 나타냅니다. 각각 `0`으로 초기화하였죠.

정답 배열을 argument로 받아옵니다. 사전에 문제에서 주어진 학생 A, B , C 각각의 패턴을 저장해 둡니다. 반복되는 단위의 최소만 저장한 것이죠. 정답 배열을 loop로 돌면서, 정답과 패턴이 일치한다면 해당하는 학생의 객체 속성 값을 증가시킵니다.

주의해야 할 점은 패턴 배열은 길이가 짧기 때문에 정답 배열의 길이가 찍는 패턴의 배열보다 길이가 길다면 패턴의 길이만큼 mod 연산자(%)를 사용해 길이를 맞춰 주어야 한다는 것입니다.

# 배운 점

-   매직 넘버 사용을 자제해야겠다는 생각을 했습니다. `%5`, `%8`, `%10` 따위의 것들은 왜 이런 값을 이용해 이러한 연산을 행하고 있는지 한 번에 파악하기 어렵습니다. 이에 다음부터 문제를 풀 때에는 간단한 것이라도 상수화 하여 가독성을 높이는 방법을 택해야겠다고 생각했습니다.

-   `immutable`함이라는 것과 `함수형 프로그래밍 패러다임`을 학습하고 싶다는 생각을 했습니다. 중구난방 코드를 짜고 있다는 생각이 들어 반성을 하게 되었습니다.
