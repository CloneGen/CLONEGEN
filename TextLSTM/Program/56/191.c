int main () {
    int a [5] = {0}, k = 0, i = 0, j = 0, m = 0, b = 0, c = 0, d = 0;
    cin >> k;
    for (m = 0; m < 5; m++) {
        b = k - (int) pow (10.0, m * 1.0);
        c = k - (int) pow (10.0, (m + 1) * 1.0);
        if (b >= 0 && c <= 0)
            d = m + 1;
    }
    for (i = 0; i < d; i++) {
        a[i] = k % 10;
        k = (k - a[i]) / 10;
    }
    for (j = 0; j < d; j++) {
        k = a[j] + k * 10;
    }
    cout << k << endl;
    return 0;
}

