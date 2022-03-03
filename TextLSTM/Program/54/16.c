int main () {
    int n, k;
    cin >> n >> k;
    int m = n - 1;
    for (int e = n + k;
    ; e += n) {
        int e1 = e, i;
        for (i = 1; i <= m; ++i) {
            if (e1 % m != 0)
                break;
            e1 = e1 / (n - 1) * n + k;
        }
        if (i >= n) {
            cout << e1;
            break;
        }
    }
    return 0;
}

