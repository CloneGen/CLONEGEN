int main () {
    int n, a, i = 1, j = 1, m [30];
    cin >> n;
    for (i = 1; i <= n; i++) {
        int m [30] = {1, 1};
        cin >> a;
        for (j = 2; j <= a - 1; j++) {
            m[j] = m[j - 1] + m[j - 2];
        }
        cout << m[a - 1] << endl;
    }
    return 0;
}

