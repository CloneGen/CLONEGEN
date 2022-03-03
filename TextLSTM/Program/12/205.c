int main () {
    int a [16];
    while ((cin >> a[0]) && a[0] != -1) {
        int num0 = 1, i, j, k, num = 0;
        i = 1;
        while (cin >> a[i] && (a[i] != 0)) {
            num0++;
            i++;
        }
        for (j = 0; j < num0 - 1; j++) {
            for (k = j + 1; k <= (num0 - 1); k++) {
                if ((a[j] == 2 * a[k]) || (2 * a[j] == a[k]))
                    num++;
            }
        }
        cout << num << endl;
    }
    return 0;
}

