int ct;

int count (int n, int p) {
    int i;
    if (n == 1)
        ct++;
    for (i = p; i <= n; i++)
        if (n % i == 0)
            count (n / i, i);
}

int main () {
    int n, m, i;
    cin >> m;
    for (i = 1; i <= m; i++) {
        ct = 0;
        cin >> n;
        count (n, 2);
        cout << ct << endl;
    }
}

