//문제:

const participant = ["marina", "josipa", "nikola", "vinko", "marina"];
const completion = ["marina", "nikola", "vinko", "josipa"];

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

console.log(solution(participant, completion));
