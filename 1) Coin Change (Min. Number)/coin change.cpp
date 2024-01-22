#include <iostream>
#include <list>
#include <climits>

using namespace std;

int minCoins(list<int> coins, int value) {
    if (value == 0) {
        return 0;
    } else if (value < 0) {
        cout << "Value cannot be negative\n";
        return -1;
    } else if (value > 0) {
        // Initialize dp array with placeholders
        int dp[value + 1];
        for (int i = 0; i <= value; i++) {
            dp[i] = INT_MAX; // Placeholder value
        }

        // Base case of dp array for Bottom-Up Approach
        dp[0] = 0;

        // Iteratively fill the more accurate values in the dp array
        for (int a = 1; a <= value; a++) {
            for (int coin : coins) {
                if (a - coin >= 0 && dp[a - coin] != INT_MAX) {
                    dp[a] = min(dp[a], 1 + dp[a - coin]);
                }
            }
        }

        // Return -1 if it was not possible to make the target value with the given coin denominations
        if (dp[value] == INT_MAX) {
            cout << "It is not possible to make the target value with the given coin denominations\n";
            return -1;
        }
        return dp[value];
    } else {
        cout << "Invalid value\n";
        return -1;
    }
}

int main() {
    list<int> coins = {1, 3, 11, 6, 5};
    int Value = 17;
    int res = minCoins(coins, Value);

    if (res != -1) {
        cout << "Minimum coins required is " << res << ".\n";
    }

    return 0;
}
