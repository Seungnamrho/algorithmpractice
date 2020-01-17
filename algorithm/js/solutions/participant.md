# 문제

[프로그래머스 테스트 - 완주하지 못한 선수](https://programmers.co.kr/learn/courses/30/lessons/42576)

# 코드

```js
function solution(participant, completion) {
	const obj = Object.create({});
	participant.forEach((person) => {
		obj[person] = 0;
	});
	const res = participant.reduce((acc, person) => {
		acc[person]++;
		return acc;
	}, obj);

	completion.forEach((com) => {
		res[com]--;
	});
	const [[result]] = Object.entries(res).filter(([key, value]) => {
		if (value !== 0) return true;
	});
	return result;
}
```

# 문제 해결 방법

-   빈 객체를 만든다.
-   참가자들(중복이 있을 수 있음)이 담겨 있는 배열을 loop를 돌면서 동적으로 객체에 속성으로 추가시켜 준다.
-   reduce method를 이용하여 update된 객체를 `res`라 한다.
-   완주한 사람들의 배열을 순회하면서 `res` 내부에 각 완주자의 속성 값을 하나씩 감소시킨다.
-   어쨌든 도전자보다 완주자가 **한 명 더** 많을 것이므로 필터를 돌았을 때 0이 아닌 사람이 바로 중도 포기자인 것이다.

# 배운 점

-   너무 더럽게 짰다. 우아한 코드를 어떻게 작성할 수 있을지 고민하며 코드를 작성해 나가야겠다.
-   destructuring을 겹쳐서 사용할 수 있다는 것을 알게 되었다. 이를테면 `[[result]]`와 같은 식인데, 올바른 코딩 방식은 아닌 것 같다는 생각이 들었다.
-   `reduce` 메소드를 사용하면서 알게 된 건데, reduce의 reducer 안에서 return한 값이 **다음 acc** 값이 된다는 것이다. 그러므로 뭐가 됐건 return을 해 주어야 하지, 리턴문을 생략하면 `undefined`가 acc에 들어가게 되어 엉망진창인 코드가 된다는 것.
-   역시 `reduce`를 사용하다 알게 된 사실인데, `[].call.apply(arr)`과 같이 `[]`만 해도 배열 내장 메서드를 사용할 수 있는 데 반해 `{}.hasOwnProperty(sth)`는 사용할 수 없다는 것이다. 그리하여 `Object.create({})`를 통해 빈 객체를 생성했다.
