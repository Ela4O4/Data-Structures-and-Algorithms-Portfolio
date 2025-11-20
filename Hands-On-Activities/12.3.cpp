#include <bits/stdc++.h>
using namespace std;

int getMinStepsDP(int n) {
    if (n == 1) return 0;
    vector<int> dp(n + 1, 0);
    dp[1] = 0;
    for (int i = 2; i <= n; ++i) {
        dp[i] = 1 + dp[i - 1];
        if (i % 2 == 0) dp[i] = min(dp[i], 1 + dp[i / 2]);
        if (i % 3 == 0) dp[i] = min(dp[i], 1 + dp[i / 3]);
    }
    return dp[n];
}

int main() {
    int N = 10;
    for (int i = 1; i <= N; ++i) {
        cout << i << " -> " << getMinStepsDP(i) << "\n";
    }
    return 0;
}
//
// Created by Mariela on 10/30/2025.
//