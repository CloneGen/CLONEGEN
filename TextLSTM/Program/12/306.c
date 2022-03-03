int main () {
    double a [18];
    int i, j, k, c, d;
    double b;
    a[0] = 0;
    for (i = 1;; i++) {
        cin >> a[1];
        if (a[1] == -1)
            break;
        for (j = 2;; j++) {
            cin >> a[j];
            if (a[j] == 0)
                break;
        }
        k = 0;
        for (c = 1; c < j; c++) {
            for (d = 1; d < j; d++) {
                b = a[c] / a[d];
                if (b == 2)
                    k++;
            }
        }
        cout << k << endl;
    }
    return 0;
}

