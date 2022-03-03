int main () {
    int i, number;
    cin >> number;
    for (i = 0; i < number; i++) {
        int m, n;
        cin >> m >> n;
        int a [100] [100];
        int *p = NULL, *q = NULL, i;
        for (p = *a; p < *a + n * m; p++) {
            cin >> *p;
        }
        int sum = 0;
        for (p = *a; p < *a + n; p++) {
            sum = sum + *p;
        }
        if (m != 1) {
            for (p = *a + (m - 1) * n; p < *a + m * n; p++) {
                sum = sum + *p;
            }
        }
        for (p = *a + n; p < *a + (m - 1) * n; p = p + n) {
            sum = sum + *p + *(p + n - 1);
        }
        cout << sum << endl;
    }
    return 0;
}

