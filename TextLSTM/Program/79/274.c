int main () {
    int a, n, m, i;
    while (cin >> n >> m && m != 0) {
        a = 0;
        for (i = 2; i <= n; i++)
            a = (a + m) % i;
        cout << a + 1 << endl;
    }
    return 0;
}

