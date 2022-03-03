int varieties = 0, p;

int dfs (int dep, int last, int k) {
    if (k == 1) {
        varieties++;
        return 0;
    }
    for (int i = last;
    i <= k; i++)
        if (k % i == 0) {
            dfs (dep + 1, i, k / i);
        }
}

int main () {
    int i, n, t;
    cin >> n;
    int m [n];
    for (i = 0; i < n; i++) {
        cin >> t;
        dfs (0, 2, t);
        m[i] = varieties;
        varieties = 0;
    }
    for (i = 0; i < n; i++)
        cout << m[i] << endl;
    return 0;
}

