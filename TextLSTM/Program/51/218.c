int main () {
    int count [500] = {0}, n, len, most = 1, j;
    char a [502], b [502] [6], *p;
    cin >> n >> a;
    len = strlen (a);
    for (int i = 0;
    i <= len - n; i++) {
        for (j = 0, p = a + i; j < n; j++, p++) {
            b[i][j] = *p;
        }
    }
    for (int i = 0;
    i <= len - n; i++) {
        for (int m = i;
        m <= len - n; m++) {
            if (strcmp (b[i], b[m]) == 0) {
                count[i]++;
            }
        }
    }
    for (int i = 0;
    i <= len - n; i++) {
        most = most > count[i] ? most : count[i];
    }
    if (most == 1) {
        cout << "NO" << endl;
    }
    else {
        cout << most << endl;
        for (int i = 0;
        i <= len - n; i++) {
            if (count[i] == most) {
                cout << b[i] << endl;
            }
        }
    }
    return 0;
}

