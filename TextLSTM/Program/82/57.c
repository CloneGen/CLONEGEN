int main () {
    int n, a, b, i, j, k, c [100], d [100], e [100], result;
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        cin >> a >> b;
        c[i] = a;
        d[i] = b;
    }
    for (j = 0; j <= n - 1; j++) {
        e[j] = 0;
        for (k = j; k <= n - 1; k++) {
            if (c[k] >= 90 && c[k] <= 140 && d[k] >= 60 && d[k] <= 90)
                e[j] = e[j] + 1;
            else
                break;
        }
    }
    for (j = 0; j < n - 1; j++) {
        result = e[j] > e[j + 1] ? e[j] : e[j + 1];
        e[j + 1] = result;
    }
    if (n != 1)
        cout << result << endl;
    else
        cout << e[0] << endl;
    return 0;
}

