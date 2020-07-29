// https://programmers.co.kr/learn/courses/30/lessons/12928#
function solution(n) {
  let arr = [];
  for (let i = 1; i <= n; i++) {
    if (n % i === 0) {
      arr[i] = i;
      arr[n / i] = n / i;
    } else {
      arr[i] = -1;
    }
  }
  let sum = 0;
  for (let i = 1; i <= n; i++) {
    if (arr[i] !== -1) {
      sum += arr[i];
    }
  }
  return sum;
}
