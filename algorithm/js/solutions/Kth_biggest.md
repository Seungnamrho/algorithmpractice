# 문제

[프로그래머스 테스트 - K 번째 수](https://programmers.co.kr/learn/courses/30/lessons/42748?language=javascript)

# 코드

```js
function solution(array, commands) {
	return commands.map(([start, end, K]) => {
		const sorted = array.slice(start - 1, end).sort((a, b) => a - b);
		return sorted[K - 1];
	});
}
```

# 문제 해결 방법

`commands` array를 순회하면서, 각 element(`start`, `end`, `K`)들을 받아와서 `solution` array를 slice한다. 그리고 K - 1번째 element를 return하면 문제는 끝이 난다. 주의할 사항은, start, end, K번째 요소가 **`1`**부터 시작한다는 점이다.

# 배운 점

-   배열 내장 메소드 `slice`는 `[start_idx,end_idx)`이다. 즉, 시작 인덱스는 포함하고 끝 인덱스의 요소는 포함하지 않는 substring을 리턴한다. 원본은 변경되지 않으므로 immutability 원칙을 지키며 코딩할 수 있었다.

-   배열 내장 메소드인 `sort`는 parameter로 `compare function`을 넣어 주어야 하는데, 그리 하지 않는다면 array의 element들을 `string`의 변환한 후 비교를 진행하기 때문에 원하는 결과를 얻지 못하 수도 있다. 이를 테면, `9 > 80` 이 `false`가 되어야 하는데, `"9" > "80"`을 비교함으로써 `true`를 얻게 되는 것이다. 이 사소하지만 중요한 점을 간과하여 많이 고생을 하였다. 이로써 `제대로 알고 사용하자`는 생각이 더 굳건히 자리잡게 되었다.
