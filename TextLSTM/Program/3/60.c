int main () {
    int n, k, x, i = 1, j, A = 0;
    scanf ("%d %d", &n, &k);
    int a [1000];
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (i = 1; i < n; i++) {
        for (j = i + 1; j <= n; j++) {
            if (a[i] + a[j] == k) {
                cout << "yes" << endl;
                A++;
                break;
            }
        }
        if (A == 1)
            break;
    }
    if (A == 0)
        cout << "no" << endl;
    return 0;
}

