int main () {
    int i, j, l, k;
    int n, a [502] = {0}, cnt = 0;
    char ch [502], gram [502] [6] = {0}, *p = ch;
    cin >> n;
    cin >> ch;
    for (i = 0; *(p + i + n - 1) != '\0'; i++) {
        for (j = 0; j < n; j++) {
            gram[cnt][j] = *(p + i + j);
        }
        a[cnt]++;
        for (k = 0; k < cnt; k++) {
            for (l = 0; l < n; l++) {
                if (gram[k][l] != gram[cnt][l])
                    break;
            }
            if (l == n) {
                a[k]++;
                a[cnt]--;
                memset (gram[cnt], 0, sizeof (gram [cnt]));
            }
        }
        if (a[cnt] != 0)
            cnt++;
    }
    int max = 0;
    for (i = 0; i < cnt; i++) {
        if (a[i] > max)
            max = a[i];
    }
    if (max == 1)
        cout << "NO" << endl;
    else {
        cout << max << endl;
        for (i = 0; i < cnt; i++)
            if (a[i] == max)
                cout << gram[i] << endl;
    }
    return 0;
}

