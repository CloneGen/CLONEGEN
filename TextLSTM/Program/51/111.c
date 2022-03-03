int main () {
    int n, counts [500] = {0}, len;
    int i, j, k = 0, judge = 0, p = 0;
    char a [501], sub [500] [5];
    cin >> n;
    cin >> a;
    len = strlen (a);
    for (i = 0; i <= len - n; i++) {
        strncpy (sub[i], a + i, n);
        sub[i][n] = '\0';
    }
    for (i = 0; i < len - n; i++) {
        if (counts[i] == -1)
            continue;
        for (j = i + 1; j <= len - n; j++) {
            k = 0;
            judge = 0;
            while (1) {
                if (sub[i][k] != sub[j][k]) {
                    judge = 1;
                    break;
                }
                if (sub[i][k] == '\0' && sub[j][k] == '\0')
                    break;
                k++;
            }
            if (judge == 0) {
                counts[i]++;
                counts[j] = -1;
            }
        }
    }
    for (i = 500; i > 0; i--) {
        for (j = 0; j <= len - n; j++) {
            if (counts[j] == i) {
                if (p == 0) {
                    cout << i + 1 << endl;
                    p = 1;
                }
                cout << sub[j] << endl;
            }
        }
        if (p == 1)
            break;
    }
    if (p == 0)
        cout << "NO" << endl;
    cin.get ();
    cin.get ();
    return 0;
}

