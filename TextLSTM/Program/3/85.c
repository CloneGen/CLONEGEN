int main () {
    int a [1001];
    int n, k, i, sum;
    int p, q;
    int control = 0;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (p = 1; p <= n; p++) {
        for (q = n; q > p; q--) {
            sum = a[p] + a[q];
            if (sum == k) {
                control = 1;
                break;
            }
        }
    }
    if (control == 0)
        cout << "no";
    else
        cout << "yes";
    return 0;
}

