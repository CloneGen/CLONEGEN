int main () {
    int m = 0, k = 0, j = 0;
    cin >> m;
    for (k = 0; k < m; k++) {
        int n = 0;
        cin >> n;
        float sum = 0;
        float a = 1, b = 2;
        for (j = 0; j < n; j++) {
            sum += b / a;
            b = a + b;
            a = b - a;
        }
        cout << fixed << setprecision (3) << sum << '\n';
    }
    return 0;
}

