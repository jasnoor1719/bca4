const prompt = require("prompt-sync")();
console.log("jasnoor kaur");
console.log("2410997165");
// anonymous function
const sum = function (a, b) {
    return a + b;
};

// take input from user
let num1 = Number(prompt("Enter first number: "));
let num2 = Number(prompt("Enter second number: "));

let result = sum(num1, num2);
console.log("Sum =", result);
