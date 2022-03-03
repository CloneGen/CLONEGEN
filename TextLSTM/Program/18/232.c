int min (int a [], int n);
int f (int b [] [100], int n);

int main () {
    int m, n, i, j;
    cin >> n;
    m = n;
    while (m--) {
        int a [100] [100] = {0};
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        cout << f (a, n) << endl;
    }
    return 0;
}

int min (int a [], int n) {
    int mini = a[0], i;
    for (i = 1; i < n; i++) {
        if (a[i] < mini)
            mini = a[i];
    }
    return mini;
}

int f (int b [] [100], int n) {
    int i, j, m, t, lmin;
    if (n == 1)
        return 0;
    else {
        for (i = 0; i < n; i++) {
            m = min (b[i], n);
            for (j = 0; j < n; j++)
                b[i][j] = b[i][j] - m;
        }
        for (i = 0; i < n; i++) {
            lmin = b[0][i];
            for (j = 0; j < n; j++) {
                if (b[j][i] < lmin)
                    lmin = b[j][i];
            }
            if (lmin > 0)
                for (j = 0; j < n; j++)
                    b[j][i] = b[j][i] - lmin;
        }
        t = b[1][1];
        for (i = 0; i < n; i++)
            for (j = 1; j < n - 1; j++)
                b[i][j] = b[i][j + 1];
        for (i = 0; i < n - 1; i++)
            for (j = 1; j < n - 1; j++)
                b[j][i] = b[j + 1][i];
        return f (b, --n) + t;
    }
}

