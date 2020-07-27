// https://programmers.co.kr/learn/courses/30/lessons/12915
function solution(strings, n) {
  strings.sort(function (a, b) {
    if (a[n] === b[n]) {
      return a > b ? 1 : -1;
    }
    return a[n] > b[n] ? 1 : -1;
  });
  return strings;
}
