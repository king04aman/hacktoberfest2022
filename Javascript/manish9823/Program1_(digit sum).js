// user Input
let number = 980890324;

// logic
let numberInString = `${number}`;
let sum = 0;
for (let i = 0; i < numberInString.length; i++) {
    sum = sum + Number(numberInString[i]);
}

console.log(sum);
