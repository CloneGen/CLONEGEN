int main () {
    int a [500], b [500];
    int N, i = 1, j = 1, k = 1, p;
    cin >> N;
    for (i = 1; i <= N; i++) {
        cin >> a[i];
    }
    for (i = 1; i <= N; i++) {
        if (a[i] % 2 == 1) {
            b[j] = a[i];
            j++;
        }
    }
    for (i = 1; i <= j - 2; i++) {
        for (k = 1; k <= j - 1 - i; k++) {
            if (b[k] > b[k + 1]) {
                p = b[k];
                b[k] = b[k + 1];
                b[k + 1] = p;
            }
        }
    }
    for (i = 1; i <= j - 2; i++) {
        cout << b[i] << ",";
    }
    cout << b[j - 1] << endl;
    return 0;
}

