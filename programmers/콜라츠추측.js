// https://programmers.co.kr/learn/courses/30/lessons/12943
function solution(num) {
  var answer = -1;
  if (num === 1) {
    answer = 0;
  } else {
    for (let i = 1; i <= 500; i++) {
      if (num % 2 === 0) {
        num /= 2;
      } else {
        num *= 3;
        num += 1;
      }
      if (num === 1) {
        answer = i;
        break;
      }
    }
  }
  return answer;
}
