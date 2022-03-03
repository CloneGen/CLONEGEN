int work (int m, int n) {
    if (m == n)
        return 1;
    if (m % n != 0)
        return 0;
    int sum = 0;
    for (int i = n;
    i <= m / n; i++)
        sum += work (m / n, i);
    return sum;
}

int main () {
    int n, m, a;
    cin >> n;
    int i, j, k;
    for (i = 1; i <= n; i++) {
        cin >> m;
        int s = 0;
        for (j = 2; j <= m; j++)
            s += work (m, j);
        cout << s << endl;
    }
    return 0;
}

