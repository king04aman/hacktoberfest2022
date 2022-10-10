// Write a program to print the sum of digit of a number.
n = prompt("enter a number");

function getSum(n) {
  if (!/^\d+$/.test(n)) {   // check for non-digit input
  	throw new Error('Wrong number: ' + n);
  }
  
  // converting each digit from text representation into number 
  // and getting sum of them
  var sum = n.split('').map(Number).reduce(function(a,b) { return a + b; });
  document.getElementById("demo").innerHTML = "Sum of the digits: " + sum ;
}

getSum(n);  // calling function to calculate the sum of numbers


//Ex. <p id ="demo"></p> in the html file