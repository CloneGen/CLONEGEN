int main () {
    int n, i, j, a [26], b [26], c;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = 1;
        c = 0;
        for (j = 1; j < i; j++)
            if (a[j] >= a[i] && b[j] > c)
                c = b[j];
        b[i] = c + 1;
    }
    c = 0;
    for (i = 1; i <= n; i++)
        if (b[i] > c)
            c = b[i];
    cout << c;
    return 0;
}

