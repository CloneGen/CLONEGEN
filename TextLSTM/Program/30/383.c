int main () {
    int n, i, sum = 0;
    int c [100], p [100];
    cin >> n;
    for (i = 0; i < n; i++)
        c[i] = i + 1;
    for (i = 0; i < n; i++) {
        if ((c[i] % 7 == 0) || ((c[i] - 7) % 10 == 0) || (c[i] > 69 && c[i] < 80))
            c[i] = 0;
    }
    for (i = 0; i < n; i++)
        p[i] = c[i] * c[i];
    for (i = 0; i < n; i++)
        sum = sum + p[i];
    cout << sum << endl;
}

