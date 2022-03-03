int main () {
    int a [10000] [2], b [10000] = {0}, c [10000] = {0};
    int i, j, n, x, y;
    int max;
    int (*p) [2];
    p = a;
    cin >> n;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < 2; j++)
            cin >> *(*(p + i) + j);
    cin >> x >> y;
    for (i = 0; i < n - 1; i++)
        b[*(*(p + i) + 0)]++;
    for (i = 0; i < n - 1; i++)
        c[*(*(p + i) + 1)]++;
    max = c[0];
    for (i = 0; i < n; i++)
        if (c[i] > max)
            max = c[i];
    for (i = 0; i < n; i++)
        if (b[i] == 0 && c[i] == max) {
            cout << i << endl;
            break;
        }
    if (i == n)
        cout << "NOT FOUND" << endl;
    return 0;
}

