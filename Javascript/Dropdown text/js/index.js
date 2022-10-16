const question1 = document.querySelector(".question1");
console.log(question1);
// chafaaouchaou

const answer1 = document.querySelector(".answer1");
console.log(answer1);
console.log(answer1.style);

const question2 = document.querySelector(".question2");
console.log(question2);


const answer2 = document.querySelector(".answer2");
console.log(answer2);



const question3 = document.querySelector(".question3");
console.log(question3);


const answer3 = document.querySelector(".answer3");
console.log(answer3);













question1.addEventListener('click',function () {
   
   if (answer1.classList.contains('class-hide')) {
    answer1.classList.remove('class-hide')
   }
   else{
    answer1.classList.add('class-hide')
   }
    
})












question2.addEventListener('click',function () {
   
    if (answer2.classList.contains('class-hide')) {
     answer2.classList.remove('class-hide')
    }
    else{
     answer2.classList.add('class-hide')
    }
     
 })

 



 

question3.addEventListener('click',function () {
   
    if (answer3.classList.contains('class-hide')) {
     answer3.classList.remove('class-hide')
    }
    else{
     answer3.classList.add('class-hide')
    }
     
 })
 




































































