const  int MAXN = 200;
char arrA [MAXN +10] [MAXN +10], arrB [MAXN +10] [MAXN +10];
char (*a) [MAXN +10], (*b) [MAXN +10];

int main () {
    a = arrA;
    b = arrB;
    int n;
    cin >> n;
    for (int i = 1;
    i <= n; i++)
        for (int j = 1;
        j <= n; j++)
            cin >> a[i][j];
    int m;
    cin >> m;
    m--;
    while (m--) {
        memset (b, '.', sizeof (arrB));
        for (int i = 1;
        i <= n; i++)
            for (int j = 1;
            j <= n; j++)
                if (a[i][j] == '@') {
                    b[i][j] = b[i + 1][j] = b[i][j + 1] = b[i - 1][j] = b[i][j - 1] = '@';
                }
        for (int i = 1;
        i <= n; i++)
            for (int j = 1;
            j <= n; j++)
                if (a[i][j] == '#') {
                    b[i][j] = '#';
                }
        swap (a, b);
    }
    int s = 0;
    for (int i = 1;
    i <= n; i++)
        for (int j = 1;
        j <= n; j++)
            if (a[i][j] == '@')
                s++;
    cout << s << endl;
}

