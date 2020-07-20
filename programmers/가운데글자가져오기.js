// https://programmers.co.kr/learn/courses/30/lessons/12903?language=javascript
function solution(s) {
  var answer = "";
  if (s.length % 2 == 1) {
    return s[parseInt(s.length / 2)];
  } else {
    return s[parseInt(s.length / 2) - 1] + s[parseInt(s.length / 2)];
  }
}
