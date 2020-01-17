function solution(answers) {
	const counter = {
		a: 0,
		b: 0,
		c: 0,
	};
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

solution([1, 2, 1, 1, 1]);
