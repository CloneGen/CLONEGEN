int main () {
    char a [600];
    char b [50] [200] [50];
    int lena = 0;
    cin >> a;
    lena = strlen (a);
    for (int i = 2;
    i <= lena; i++)
        for (int p = 0;
        p <= lena - i; p++) {
            for (int j = p;
            j < p + i; j++)
                b[i][p][j] = a[j];
            int k = p;
            for (; k <= p + i / 2; k++) {
                if (b[i][p][k] != b[i][p][2 * p + i - 1 - k])
                    break;
            }
            int judgesame = 0;
            for (int j = p;
            j < i + p && p >= 1; j++)
                if (b[i][p - 1][j - 1] == b[i][p][j])
                    judgesame++;
            if (k == (p + i / 2 + 1) && judgesame != i) {
                for (int j = p;
                j < i + p; j++)
                    cout << b[i][p][j];
                cout << endl;
            }
        };
    return 0;
}

