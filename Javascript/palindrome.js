function checkPalindrome(num) {
    const reverseNum = num.split("").reverse().join("");
    if(num == reverseNum) {
        console.log('It is palindrome');
    }
    else {
        console.log('It is not palindrome');
    }
}
const num = prompt('Enter a number: ');
checkPalindrome(num);