const arr = [1, 5, 2, 6, 3, 7, 4];
const arr2 = [0, 0, 0];
const commands = [
	[2, 5, 3],
	[4, 4, 1],
	[1, 7, 3],
];
const commands2 = [[1, 4, 2]];

const ans = [5, 6, 3];

function solution(array, commands) {
	return commands.map(([start, end, K]) => {
		const sorted = array.slice(start - 1, end).sort();
		return sorted[K - 1];
	});
}

const result = solution(arr2, commands2);
console.log(result);
