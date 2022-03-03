int a [101] [101];
int n;

int search (int m) {
    int i, j, k, min;
    if (m > n)
        return 0;
    for (i = 1; i <= n; i++)
        if (a[i][0] != -1) {
            min = 99999999;
            for (j = 1; j <= n; j++)
                if ((a[0][j] != -1) && (a[i][j] < min))
                    min = a[i][j];
            if (min == 0)
                continue;
            for (j = 1; j <= n; j++)
                if (a[0][j] != -1)
                    a[i][j] = a[i][j] - min;
        }
    for (j = 1; j <= n; j++)
        if (a[0][j] != -1) {
            min = 99999999;
            for (i = 1; i <= n; i++)
                if ((a[i][0] != -1) && (a[i][j] < min))
                    min = a[i][j];
            if (min == 0)
                continue;
            for (i = 1; i <= n; i++)
                if (a[i][0] != -1)
                    a[i][j] = a[i][j] - min;
        }
    i = a[m][m];
    a[m][0] = -1;
    a[0][m] = -1;
    return (i + search (m + 1));
}

int main () {
    int i, j, t;
    cin >> n;
    for (t = 1; t <= n; t++) {
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                cin >> a[i][j];
        for (i = 1; i <= n; i++) {
            a[0][i] = 0;
            a[i][0] = 0;
        }
        cout << search (2) << endl;
    }
    return 0;
}

