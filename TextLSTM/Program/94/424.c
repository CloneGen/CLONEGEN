int main () {
    int N = 0, a [500], b [500], i = 0, j = 0, k = 0, t = 0;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0)
            b[j++] = a[i];
    }
    for (i = 1; i <= j - 1; i++) {
        for (k = 0; k < j - i; k++) {
            if (b[k] > b[k + 1]) {
                t = b[k];
                b[k] = b[k + 1];
                b[k + 1] = t;
            }
        }
    }
    cout << b[0];
    for (k = 1; k < j; k++) {
        cout << "," << b[k];
    }
    return 0;
}

