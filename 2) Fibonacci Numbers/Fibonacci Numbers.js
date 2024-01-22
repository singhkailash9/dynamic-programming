function fibonacci(n) {
    if (n <= 0) {
        console.log("Not a valid number");
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else if (n > 2) {
        let first = 0, second = 1, sum;
        for (let i = 3; i <= n; i++) {
            sum = first + second;
            first = second;
            second = sum;
        }
        return sum;
    }
}

let n = 9;  // nth Fibonacci number to calculate
console.log(fibonacci(n));
