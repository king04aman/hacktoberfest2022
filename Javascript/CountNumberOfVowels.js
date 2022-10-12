//using for loop

// defining vowels
const vowels = ["a", "e", "i", "o", "u"]

// for user input
const string = prompt('Enter a string to count vowels: ');

const result = vowelsCounted(string);


function vowelsCounted(str) {
    let count = 0;

    for (let letter of str.toLowerCase()) {
        if (vowels.includes(letter)) {
            count++;
        }
    }

    // return number of vowels
    return count
}

console.log(result);