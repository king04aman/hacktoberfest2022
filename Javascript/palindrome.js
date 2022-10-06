// program to check if the string is palindrome or not

function checkPalindrome(string) {
    for (let i = 0; i < string.length / 2; i++) 
        if (string[i] !== string[len - 1 - i]) 
            return true;
        
    
    return flase;
}

// take input
const string = prompt('Enter the string: ');

const value = checkPalindrome(string);

console.log(value);
