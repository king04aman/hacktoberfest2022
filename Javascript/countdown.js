const newYear = "1 Jan 2022";
const daysEl = document.getElementById('days');
const hrsEl = document.getElementById('hrs');
const minEl = document.getElementById('min');
const secEl = document.getElementById('sec');

function countdown() {
    const curDate = new Date();
    const toDate = new Date(newYear);

    const tsec = Math.floor((toDate - curDate) / 1000);
    const days = Math.floor(tsec / (3600*24));
    const hrs = Math.floor((tsec / 3600)) % 24;
    const min = Math.floor((tsec / 60)) % 60;
    const sec = Math.floor(tsec % 60);

    // console.log(days, hrs, min, sec);
    daysEl.innerHTML = days;
    hrsEl.innerHTML = formatDate(hrs);
    minEl.innerHTML = formatDate(min);
    secEl.innerHTML = formatDate(sec);
}

function formatDate(time) {
    return time < 10 ? (`0${time}`) : time;
}

countdown();
setInterval(countdown, 1000);
// console.log("hello");
