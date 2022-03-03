void search (int l);
int n, m, p [101] [101] = {0}, c = 0;
char a [101] [101];

int main () {
    cin >> n;
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++)
            cin >> a[i][j];
    cin >> m;
    search (1);
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++)
            if (a[i][j] == '@')
                c++;
    cout << c << endl;
    return 0;
}

void search (int l) {
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++) {
            if (a[i][j] == '@') {
                if (i > 0 && a[i - 1][j] == '.')
                    p[i - 1][j] = 1;
                if (i < n - 1 && a[i + 1][j] == '.')
                    p[i + 1][j] = 1;
                if (j > 0 && a[i][j - 1] == '.')
                    p[i][j - 1] = 1;
                if (j < n - 1 && a[i][j + 1] == '.')
                    p[i][j + 1] = 1;
            }
        }
    for (int k = 0;
    k < n; k++)
        for (int h = 0;
        h < n; h++)
            if (p[k][h] == 1)
                a[k][h] = '@';
    if (l < m - 1)
        search (l + 1);
}

