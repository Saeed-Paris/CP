function log(a) {
    console.log(a)
}
let zarb = 533333333333;
let tavan = zarb;
let allNums = [Math.PI, Math.E]
for (let i = 1; i < 500; i++) {
    allNums.push(i)
}
let alamat = ['*', '**']
let arr = []
for (numb of allNums) {
    for (num of allNums) {
        for (al of alamat) {
            x = (eval(`${numb} ${al} ${num}`) % 1);
            if (x) arr.push(x)
        }
    }
}
let min = 3
for (i of arr) {
    for (j of arr) {
        for (al of ['+', '*', '**']) {
            let x = (eval(`${i} ${al} ${j}`) % 1)
            if (x < min) min = x
        }
    }
}
log(min)
// for (let p = 0; p < 2; p++) {
//     for (let pp = 0; pp < 2; pp++) {
//         for (let ppp = 0; ppp < 2; ppp++) {
//             for (let pppp = 0; pppp < 2; pppp++) {
//                 let x = 0;
//                 if (p == 0) x = Math.PI
//                 else {
//                     x = Math.E
//                 }
//                 arr.push()

//                 x * adad ^ adad

//                 for (let j = 0; j < 10; j++) {
//                     for (let k = 1; k <= 2; k++) {
//                         for (let l = 1; l < 10; l++) {
//                             for (let m = 1; m <= 2; m++) {
//                                 for (let n = 0; n < 10; n++) {
//                                     for (let o = 1; o <= 2; o++) {
//                                         for (let p = 1; p < 10; p++) {
//                                             if ()

//                             }
//                                     }
//                                 }
//                             }
//                         }

//                     }
//                 }
//                 console.log(i);
//             }


//             // for (let i = 1; i < 100; i++) {
//             //     for (let j = 1; j < 100; j++) {
//             //         let dif = Math.abs((Math.PI ** i) - (Math.E ** j))
//             //         if (dif < tavan) tavan = dif
//             //     }
//             // }

//             console.log(zarb, tavan, info)