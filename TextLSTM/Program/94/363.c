int main () {
    int a [500];
    int N, i, j, temp, m, n;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> a[i];
    for (i = 0; i < N -1; i++)
        for (j = 0; j < N -i - 1; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    for (m = 0; m < N; m++) {
        if ((a[m] % 2) != 0) {
            cout << a[m];
            break;
        }
    }
    for (n = m + 1; n < N; n++) {
        if ((a[n] % 2) != 0)
            cout << "," << a[n];
    }
    cout << endl;
    return 0;
}

