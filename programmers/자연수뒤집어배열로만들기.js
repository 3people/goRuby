//programmers.co.kr/learn/courses/30/lessons/12932
https: function solution(n) {
  var answer = [];
  let num = n.toString();
  for (let i = 0; i < num.length; i++) {
    answer[i] = Number(num[num.length - i - 1]);
  }
  return answer;
}
