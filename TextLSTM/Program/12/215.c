int main () {
    int a [16], k, i, j;
    for (k = 0;; k++) {
        int n = -1, num = 0;
        for (i = 0; i < 16; i++) {
            cin >> a[i];
            n++;
            if (a[i] == 0)
                break;
        }
        if (a[0] == -1)
            break;
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++) {
                if (a[i] == 2 * a[j] || a[j] == 2 * a[i])
                    num++;
            }
        cout << num << endl;
    }
    return 0;
}

