//programmers.co.kr/learn/courses/30/lessons/12933
https: function solution(n) {
  let word = n
    .toString()
    .split("")
    .sort((a, b) => (a < b ? 1 : -1))
    .join("");
  let answer = parseInt(word);
  return answer;
}
