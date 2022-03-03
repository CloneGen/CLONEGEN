int main () {
    int n, a [100001], b [100001], *p, *q, i, j;
    cin >> n;
    memset (a, 0, sizeof (a));
    memset (b, 0, sizeof (b));
    for (;;) {
        cin >> i >> j;
        if ((i == 0) && (j == 0))
            break;
        a[j]++;
        b[i]++;
    }
    for (p = &(a[0]), q = &(b[0]), i = 0; i < n; i++) {
        if ((*(p + i) == n - 1) && (*(q + i) == 0)) {
            j = i;
            break;
        }
    }
    if (j == n)
        cout << "NOT FOUND" << endl;
    else
        cout << j << endl;
    return 0;
}

