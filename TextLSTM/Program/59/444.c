int n;
char a [101] [101];

void judge (int i, int j) {
    for (int d = -1;
    d <= 1; d += 2) {
        if ((i + d >= 0) && (i + d < n) && (a[i + d][j] == '.'))
            a[i + d][j] = '$';
        if ((j + d >= 0) && (j + d < n) && (a[i][j + d] == '.'))
            a[i][j + d] = '$';
    }
}

int main () {
    int m, num = 0, i, j, k;
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    cin >> m;
    for (k = 1; k <= m; k++) {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (a[i][j] == '$')
                    a[i][j] = '@';
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (a[i][j] == '@') {
                    judge (i, j);
                    num++;
                    a[i][j] = '#';
                }
    }
    cout << num;
    return 0;
}

