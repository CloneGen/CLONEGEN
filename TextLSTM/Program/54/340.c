int main () {
    int n, k, i, a [1000];
    cin >> n >> k;
    a[n] = n + k;
    for (; i != 0;) {
        for (i = n - 1; i >= 1;) {
            if (a[i + 1] % (n - 1) == 0) {
                a[i] = a[i + 1] * n / (n - 1) + k;
                i--;
            }
            else {
                a[n] += n;
                break;
            }
        }
    }
    cout << a[1];
    return 0;
}

