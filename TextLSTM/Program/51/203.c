int main () {
    int n, k, i, j, l, maxc = 0, x = 0;
    char c [501];
    char strout [501] [5];
    int a [501];
    for (i = 0; i < 501; i++)
        a[i] = 1;
    cin >> n >> c;
    k = strlen (c);
    char *p = c;
    for (j = 0; j <= k - n; j++)
        for (l = j + 1; l <= k - n; l++) {
            for (i = 0; i < n; i++)
                if (*(p + j + i) == *(p + l + i))
                    continue;
                else
                    break;
            if (i >= n)
                a[j]++;
        }
    for (i = 0; i < k - n; i++)
        if (a[i] >= maxc)
            maxc = a[i];
    for (i = 0; i < k - n; i++)
        if (a[i] >= maxc) {
            for (j = 0; j < n; j++)
                strout[x][j] = *(p + i + j);
            x++;
        }
    if (maxc == 1)
        cout << "NO" << endl;
    else {
        cout << maxc << endl;
        for (i = 0; i < x; i++) {
            for (j = 0; j < n; j++)
                cout << strout[i][j];
            cout << endl;
        }
    }
    return 0;
}

