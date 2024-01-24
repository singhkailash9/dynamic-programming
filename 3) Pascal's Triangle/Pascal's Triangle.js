function generate(n) {
    let pascalList = [[1]];
    for (let i = 0; i < n - 1; i++) {
        let temp = [0, ...pascalList[pascalList.length - 1], 0];

        let row = temp.map((val, index) => val + temp[index + 1]);

        row.pop();
        pascalList.push(row);
    }
    return pascalList;
}

let n = 6;
console.log(generate(n));
