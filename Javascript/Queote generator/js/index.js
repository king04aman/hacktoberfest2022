import { quote } from "./quotes.js";

// chafaaouchaou

function creation(a) {

    const p1 = new quote(a);
    console.log(p1);
    quote_text.innerText=p1.quote
    quote_auther.innerText=p1.author
}


const btn = document.querySelector('.btn');
const quote_text=document.querySelector('.quote-text');
const quote_auther= document.querySelector('.quote-auther');

btn.addEventListener('click',function () {
    // console.log("maaaman");
//    console.log( Math.floor(Math.random() * 7));
   creation(Math.floor(Math.random() * 6));
})




















