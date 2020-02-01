let answer = 0;
function solution(numbers, target) {
	dfs(numbers, target, 0, 0);
	return answer;
}

function dfs(numbers, target, acc, idx) {
	console.log(acc, idx);
	if (idx >= numbers.length) {
		if (target === acc) answer++;
		return;
	}

	dfs(numbers, target, acc + numbers[idx], idx + 1);
	dfs(numbers, target, acc - numbers[idx], idx + 1);
}
const numbers = [1, 1, 1, 1, 1];
const target = 3;
solution(numbers, target);
console.log(answer);
