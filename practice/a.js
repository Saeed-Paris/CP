let allNums = [Math.PI, Math.E]
for (let i = 1; i < 100; i++) {
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
console.log(arr.length)
let info = ''
let min = 3
let obj = {}
for (i of arr) {
    for (j of arr) {
        for (al of ['+', '*', '**']) {
            let x = (eval(`${i} ${al} ${j}`) % 1)
            if (x < min && x) {
                obj = {
                    info: `${i} ${al} ${j}`,
                    min: x,
                    javab: eval(info)
                }
            }
        }
    }
}
console.log(obj);