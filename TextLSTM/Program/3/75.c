int main () {
    int a [1000];
    int i, j = 1, p, q;
    int n, k, m;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        cin >> m;
        a[i] = m;
    }
    while (j < n) {
        p = j + 1;
        while (p <= n) {
            q = a[j] + a[p];
            if (q == k)
                break;
            else
                p = p + 1;
        }
        if (p <= n)
            break;
        else
            j = j + 1;
    }
    if (j == n && p == n + 1)
        cout << "no";
    else
        cout << "yes";
    return 0;
}

