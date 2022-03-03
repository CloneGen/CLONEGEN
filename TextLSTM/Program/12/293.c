int main () {
    int a [16] = {0}, i = 1, j = 1, m = 0, k = 0;
    while (cin >> a[0]) {
        i = 1;
        j = 1;
        m = 0;
        k = 0;
        if (a[0] != -1) {
            do {
                cin >> a[i];
                i++;
            }
            while (a[i - 1] != 0);
            for (j = 0; j <= i - 2; j++) {
                for (k = 0; k <= i - 2; k++) {
                    if (a[j] == 2 * a[k])
                        m++;
                }
            }
            cout << m << endl;
        }
        else
            break;
    }
    return 0;
}

