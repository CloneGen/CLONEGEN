void huiwen (char a [], int k, int n) {
    int i, j;
    for (i = 0; i <= n - k; i++) {
        for (j = i; j < k / 2 + i; j++) {
            if (a[j] != a[k + i * 2 - 1 - j])
                break;
        }
        if (j == k / 2 + i) {
            for (j = i; j <= k - 1 + i; j++)
                cout << a[j];
            cout << endl;
        }
    }
    return;
}

int main () {
    char a [501];
    int k, n;
    cin.get (a, 500);
    n = strlen (a);
    for (k = 2; k <= n; k++) {
        huiwen (a, k, n);
    }
    return 0;
}

