int main () {
    while (1) {
        int a [16] = {0}, i, j, p, k, l, num = 0;
        cin >> a[0];
        if (a[0] == -1)
            break;
        for (i = 1; i <= 16; i++) {
            cin >> a[i];
            if (a[i] == 0)
                break;
        }
        while (a[0] != 0) {
            for (j = 0; j < i; j++) {
                if (a[j] > a[j + 1]) {
                    p = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = p;
                }
            }
        }
        for (k = 1; k <= i - 1; k++) {
            for (l = k; l <= i; l++) {
                if (2 * a[k] == a[l])
                    num++;
                if (2 * a[k] < a[l])
                    break;
            }
        }
        cout << num << endl;
    }
    return 0;
}

