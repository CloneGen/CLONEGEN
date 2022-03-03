int k;

int main () {
    int Max (int a, int b);
    int height [100];
    int dp [100];
    char c;
    int i = 0, temp = 0, n, j, dpmax = 0;
    scanf ("%d", &n);
    n = n - 1;
    for (i = 0; i <= n; i++) {
        scanf ("%d", &height[i]);
    }
    for (i = 0; i <= n; i++) {
        dp[i] = 1;
        for (j = 0; j < i; j++) {
            if (height[i] <= height[j])
                dp[i] = Max (dp[j] + 1, dp[i]);
        }
    }
    for (i = 0; i <= n; i++) {
        dpmax = Max (dpmax, dp[i]);
    }
    printf ("%d", dpmax);
    return 0;
}

int Max (int a, int b) {
    k = (a < b ? b : a);
    return (k);
}

