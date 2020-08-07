// https://programmers.co.kr/learn/courses/30/lessons/12948
function solution(phone_number) {
  let len = phone_number.length;
  let answer = new Array(len - 4).fill("*");
  let back = phone_number.split("").slice(len - 4, len);
  answer.push(...back);
  answer = answer.join("");
  return answer;
}
