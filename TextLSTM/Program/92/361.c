int TianJi [M], King [M];
int dp [M] [M];

int cmp (const  void *a, const  void *b) {
    return *(int*) b - *(int*) a;
}

int profit (int x, int y) {
    if (TianJi[x] > King[y]) {
        return 200;
    }
    else if (TianJi[x] < King[y]) {
        return -200;
    }
    else {
        return 0;
    }
}

void main () {
    int i, j, n;
    while (scanf ("%d", &n) && n != 0) {
        memset (dp, 0, sizeof (dp));
        for (i = 1; i <= n; i++) {
            scanf ("%d", &TianJi[i]);
        }
        for (i = 1; i <= n; i++) {
            scanf ("%d", &King[i]);
        }
        qsort (TianJi +1, n, sizeof (TianJi [0]), cmp);
        qsort (King +1, n, sizeof (King [0]), cmp);
        for (i = 1; i <= n; i++) {
            dp[i][0] = dp[i - 1][0] + profit (n - i + 1, i);
            dp[i][i] = dp[i - 1][i - 1] + profit (i, i);
            for (j = 1; j < i; j++) {
                dp[i][j] = max ((dp[i - 1][j] + profit (n - (i - j) + 1, i)), (dp[i - 1][j - 1] + profit (j, i)));
            }
        }
        int ans = -99999999;
        for (i = 0; i <= n; i++) {
            if (ans < dp[n][i]) {
                ans = dp[n][i];
            }
        }
        printf ("%d\n", ans);
    }
}

