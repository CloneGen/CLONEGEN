int main () {
    int a [111] [111] = {0};
    int b [111] [111] = {0};
    int n;
    char c [111] [111];
    int day;
    int sum = 0;
    char ch;
    cin >> n;
    for (int i = 1;
    i <= n; i++)
        cin >> c[i];
    for (int i = 1;
    i <= n; i++) {
        for (int j = 1;
        j <= n; j++) {
            ch = c[i][j - 1];
            if (ch == '.')
                a[i][j] = 1;
            else if (ch == '#')
                a[i][j] = 0;
            else
                a[i][j] = -1;
        }
    }
    cin >> day;
    for (int i = 0;
    i < day - 1; i++) {
        for (int k = 1;
        k <= n; k++)
            for (int j = 1;
            j <= n; j++)
                b[k][j] = a[k][j];
        for (int r = 1;
        r <= n; r++)
            for (int co = 1;
            co <= n; co++) {
                if (a[r][co] == -1) {
                    if (a[r - 1][co] == 1)
                        b[r - 1][co] = -1;
                    if (a[r + 1][co] == 1)
                        b[r + 1][co] = -1;
                    if (a[r][co - 1] == 1)
                        b[r][co - 1] = -1;
                    if (a[r][co + 1] == 1)
                        b[r][co + 1] = -1;
                }
            }
        for (int r = 1;
        r <= n; r++)
            for (int co = 1;
            co <= n; co++)
                a[r][co] = b[r][co];
    }
    for (int i = 1;
    i <= n; i++)
        for (int j = 1;
        j <= n; j++)
            if (a[i][j] == -1)
                sum++;
    cout << sum;
    return 0;
}

