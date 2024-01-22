def min_coins(coins: list[int], value):
    if value == 0:
        return 0
    elif value < 0:
        print("Sum of coins cannot be negative")
        return -1
    elif value > 0:
        # Initialize dp as placeholder array with size of (value + 1) and all values as (value + 1)
        dp = [value + 1] * (value + 1)
        # Base case of dp array for Bottom-Up Approach
        dp[0] = 0
        # Iteratively fill the more accurate values in the dp array
        for a in range(1, value + 1):
            for coin in coins:
                if a - coin >= 0:
                    dp[a] = min(dp[a], 1 + dp[a - coin])
        # return -1 if it was not possible to make the target value with the given coin denominations
        if dp[value] == (value + 1):
            # if this condition is true then the placeholder value was never changed in the dp array
            return -1
        return dp[value]
    else:
        print("Please provide a valid value input")
        return -1

coins = [1, 3, 11, 6, 5]
Value = 17
min_coin_required = min_coins(coins, Value)

print(f"Minimum coins required is {min_coin_required}.")