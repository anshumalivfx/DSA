#include<iostream>

int* feb(int n) {
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp;
}

int main() {
    int n;
    std::cin >> n;
    int* dp = feb(n);
    for(int i = 0; i <= n; i++) {
        std::cout << dp[i] << " ";
    }
    return 0;
}
