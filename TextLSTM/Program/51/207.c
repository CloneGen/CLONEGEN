int main () {
    char str [502] = {0}, a [500] [5] = {0}, b [100] [5] = {0}, *p = NULL;
    int n, l, i, j, cnt = 0, max = 0, k = 1, q;
    cin >> n;
    cin >> str;
    l = strlen (str);
    p = str;
    for (i = 0; i < l - n + 1; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = *p;
            p++;
        }
        p = p + 1 - n;
    }
    for (i = 0; i < l - n + 1; i++) {
        cnt = 0;
        for (j = i; j < l - n + 1; j++) {
            if (strcmp (a[i], a[j]) == 0)
                cnt++;
        }
        if (cnt > max) {
            k = 0;
            max = cnt;
            strcpy (b[k], a[i]);
        }
        if (cnt == max) {
            for (q = 0; q <= k; q++) {
                if (strcmp (b[q], a[i]) == 0)
                    break;
            }
            if (q == k + 1) {
                k++;
                strcpy (b[k], a[i]);
            }
        }
    }
    if (max == 1)
        cout << "NO" << endl;
    else {
        cout << max << endl;
        for (i = 0; i <= k; i++)
            cout << b[i] << endl;
    }
    return 0;
}

