//Write a program to count vowel in a given string.

/**
 *
 * @param {String} s Accepts a string
 * @returns {Number} returns count of vowels present in a string
 */
const countVowel = (s = '') => {
    let count = 0;
    const vowels = ['a', 'e', 'i', 'o', 'u'];
    s.split('').forEach((ch) => {
        if (vowels.includes(ch.toLowerCase())) count++;
    });
    return count;
};

countVowel('My name is Jhony999 000 ^^ 88 😂 Depp'); // O/P: 5
