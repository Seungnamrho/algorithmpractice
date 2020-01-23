# Binary Search(이분탐색)

## Binary Search가 무엇인가?

`정렬된` 배열에서 특정한 element 혹은 그 위치를 찾는 `보다 효율적인` 알고리즘이다. 이름에서부터 알 수 있듯이 배열을 크게 이등분하고 그 중간(이하 **mid**)에 위치한 element를 기준으로, 찾으려고 하는 값보다 mid가 크다면 배열의 왼쪽 절반을 버리고 mid보다 찾으려고 하는 값이 작다면 오른쪽 절반을 버리는 작업을 반복해 구현할 수 있다.

## 왜 이것이 필요한가?

배열의 맨 앞쪽에서부터 linear search를 적용하면 최악의 경우(찾으려고 하는 element가 배열의 끝에 위치해 있을 때) 모든 element를 다 탐색해야 하므로 배열의 길이를 N이라고 할 때 O(N)의 time complexity를 가지게 된다.

그러나 이분탐색을 이용하면 절반씩 배열을 줄여 나가므로 O(logN)의 time complexity로 원하는 값을 찾을 수가 있다.

단점이 있다면, 앞에서도 언급한 것처럼 이 알고리즘을 사용하기 위해서는 배열이 정렬되어 있어야 한다는 제약조건이 있기 때문에 이를 위해 O(NlogN)의 time complexity가 필요하다는 점이다. Linear search를 사용한다면 O(N) 안에 탐색할 수 있음에도 불구하고 말이다. 문제 정의에 따라 잘 선택하는 것이 좋을 것이다.

## 코드 예시

아래 코드는 찾고자 하는 값이 배열 내에 존재하면 그 배열의 index를, 없다면 -1을 return하는 코드이다. 간단한 로직만 구현해 놓았기 때문에 이것을 응용하여 중복된 element들이 존재할 때는 물론이고 찾고자 하는 값이 배열에 존재하지 않을 때 대신에 가까운 값을 return한다든지 하는 로직은 손쉽게 구현할 수 있을 것이다.

```js
function binarySearch(arr, item) {
	const LEN = arr.length;
	let left = 0,
		right = LEN - 1;
	let mid = Math.floor((left + right) / 2);
	while (left < right) {
		if (item === arr[mid]) return mid;
		else if (item < arr[mid]) right = mid;
		else if (item > arr[mid]) left = mid + 1;
		mid = Math.floor((left + right) / 2);
	}
	return -1;
}
```
