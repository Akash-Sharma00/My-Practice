const a = document.getElementsByTagName('p');

let b = [10, 30, 20, 50, 40];

let i;

for (i = 0; i < b.length; i++) {
    a[i].innerHTML = b[i];
}

for (i = 0; i < b.length; i++) {
    console.log(b[i]);
}

const a1 = document.getElementsByClassName('subbox');
const b1 = document.getElementById('sort');

b1.onclick = function () {
    if (b1.innerHTML === 'Start Sort') {
        a1[1].classList.add('one');
        a1[2].classList.add('two');
        a1[3].classList.add('one');
        a1[4].classList.add('two');
        a1[0].classList.add('one');
    }
}


























// if (document.getElementById('sort').addEventListener('click',function () {
//     for (i = 0; i < b.length; i++) {
//         for (j = i; j < b.length - i - 1; j++) {
//             if (b[j] < b[j + 1]) {
//                 console.log(a1);
//                 a1[j].setAttribute('id', 'one');
//                 a1[j+1].setAttribute('id','two');
//                 a1[j+4].setAttribute('id', 'two');
//                 a1[j].setAttribute('id','one');
//             }
//         }
//     }
// }));
