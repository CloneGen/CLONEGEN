int main () {
    int i, j, n, t, m;
    char a [1] [5];
    cin.get (a[0], 5);
    n = strlen (a[0]);
    for (i = 0, j = n - 1; i < j; i++, j--) {
        t = a[0][i];
        a[0][i] = a[0][j];
        a[0][j] = t;
    }
    for (m = 0; m < n; m++)
        cout << a[0][m];
    return 0;
}

