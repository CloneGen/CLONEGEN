int main () {
    int count [500] = {0}, n, len, most = 1;
    char a [502], b [502] [6];
    cin >> n >> a;
    len = strlen (a);
    for (int i = 0;
    i <= len - n; i++) {
        for (int j = 0, k = i;
        j < n; j++, k++) {
            b[i][j] = a[k];
        }
    }
    for (int i = 0;
    i <= len - n; i++) {
        for (int j = i;
        j <= len - n; j++) {
            if (strcmp (b[i], b[j]) == 0) {
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

