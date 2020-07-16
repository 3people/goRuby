// https://programmers.co.kr/learn/courses/30/lessons/42748?language=javascript
function solution(array, commands) {
  var answer = [];
  commands.forEach((command) => {
    let arr = array.slice(command[0] - 1, command[1]);
    arr.sort(function (a, b) {
      return a - b;
    });
    console.log(arr);
    answer.push(arr[command[2] - 1]);
  });
  return answer;
}
