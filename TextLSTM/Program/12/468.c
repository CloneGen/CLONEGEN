int main () {
    int a [100], j, k, l, sum = 0;
    for (;;) {
        for (j = 0;; j++) {
            cin >> a[j];
            if (a[j] == 0 || a[j] == -1)
                break;
        }
        if (a[0] == -1)
            break;
        for (k = 0; k < j - 1; k++) {
            for (l = k + 1; l <= j - 1; l++) {
                if (a[k] == 2 * a[l] || a[l] == 2 * a[k]) {
                    sum++;
                }
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

