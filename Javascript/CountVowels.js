
function countVowel(str) { 

    // finding the number of vowels
    const count = str.match(/[aeiou]/gi).length;

    // return number of vowels
    return count;
}

// taking input
const string = prompt('Enter a string: ');

const result = countVowel(string);

console.log(result);