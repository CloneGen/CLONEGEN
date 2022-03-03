int main () {
    int i, j, k, num;
    double a [16];
    do {
        for (i = 0; i <= 15; i++) {
            a[i] = 0;
        }
        num = 0;
        for (i = 0; i <= 15; i++) {
            cin >> a[i];
            if (a[i] == 0 || a[0] == -1) {
                break;
            }
        }
        if (a[0] == -1) {
            break;
        }
        for (j = 0; j <= i - 1; j++) {
            for (k = j + 1; k <= i - 1; k++) {
                if (a[j] == 2 * a[k] || a[j] == a[k] / 2.0) {
                    num = num + 1;
                }
            }
        }
        cout << num << endl;
    }
    while (1);
    return 0;
}

