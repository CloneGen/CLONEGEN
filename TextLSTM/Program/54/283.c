int main () {
    int n, k, i, i2, j;
    cin >> n >> k;
    for (i2 = 1;; i2++) {
        i = i2;
        for (j = 0; j < n; j++) {
            if (i % (n - 1) != 0)
                break;
            i = i * n / (n - 1) + k;
        }
        if (j == n) {
            cout << i;
            return 0;
        }
        else
            continue;
    }
    return 0;
}

