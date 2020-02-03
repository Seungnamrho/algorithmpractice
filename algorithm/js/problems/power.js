function solution(N, M) {
	return power(N, M, 1);
}

function power(N, M, current) {
	if (M === 0) return current;
	return power(N, M - 1, current * N);
}
console.log(solution(9, 8));
