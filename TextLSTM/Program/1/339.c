int f (int m, int n) {
    if (m < n || m / n == 1)
        return 0;
    if ((m % n == 0) && m / n >= n)
        return f (m / n, n) + f (m, n + 1) + 1;
    else
        return f (m, n + 1);
}

int main () {
    int q, i;
    cin >> q;
    for (i = 1; i <= q; i++) {
        int p;
        cin >> p;
        cout << f (p, 2) + 1 << endl;
    }
    return 0;
}

