int main () {
    int a, b, i, j, q;
    cin >> a >> b;
    int m [a + 1] [b + 1];
    for (i = 1; i <= a; i++)
        for (j = 1; j <= b; j++)
            cin >> m[i][j];
    for (q = 2; q <= a + b; q++)
        for (i = 1, j = q - i; j > 0; i++, j = q - i) {
            if (j <= b && i <= a)
                cout << m[i][j] << endl;
        }
    return 0;
}

