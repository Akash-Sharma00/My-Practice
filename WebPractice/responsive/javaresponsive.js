let burger = document.querySelector('.burger');
let navlist = document.querySelector('.nav-list');
let rightnav = document.querySelector('.rightnav');
let navbar = document.querySelector('.navbar');

burger.addEventListener('click', () => {
    rightnav.classList.toggle('v-nav');
    navlist.classList.toggle('v-nav');
    navbar.classList.toggle('h-nav');
});

let txt = document.getElementsByClassName('inpt').addEventListener('click', function () {
    Array.from(txt).forEach(txt)
    console.log(txt);
});


// console.time();
// let obj = {
//     name : 'Akash',
//     Age : 20,
//     it : true,
//     "Hello" : 12345
// };
// console.table(obj);
// console.timeEnd();
// console.clear();
// for(let key in obj)
// {
//     console.log(`${key} is key of ${obj[key]}`)
// }
