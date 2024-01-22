function minCoins(coins, value) {
    if (value == 0) {
        return 0;
    } else if (value < 0) {
        console.log("Value cannot be negative");
        return -1;
    } else if (value > 0) {
        let dp = Array.from({ length: value + 1 }, () => value + 1);
        dp[0] = 0;
        for (let a = 1; a <= value; a++) {
            for (const coin of coins) {
                if ((a - coin) >= 0) {
                    dp[a] = Math.min(dp[a], 1 + dp[a - coin]);
                }
            }
        }
        if (dp[value] == (value + 1)) {
            return -1;
        }
        return dp[value];
    } else {
        console.log("Invalid value");
        return -1;
    }
}

let coins = [1, 3, 11, 6, 5];
let Value = 17;

let result = minCoins(coins, Value);
console.log(result);