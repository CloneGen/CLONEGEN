int main () {
    int a [16], x, i, j, k, l, n;
    for (i = 0;; i++) {
        n = 0;
        j = 0;
        while (cin >> x) {
            if (x == 0 || x == -1)
                break;
            a[j] = x;
            j++;
        }
        if (x == -1)
            break;
        for (k = 0; k < j; k++) {
            for (l = 0; l < j; l++) {
                if (a[l] == 2 * a[k])
                    n = n + 1;
            }
        }
        cout << n << endl;
    }
    return 0;
}

