int main () {
    int a [10010];
    int m;
    int t = 1;
    int flag = 1;
    int b, c;
    memset (a, 0, sizeof (a));
    a[1] = 2;
    cin >> m;
    for (int i = 3;
    i <= m; i++) {
        for (int j = 1;
        j <= t; j++) {
            flag = 1;
            if (i % a[j] == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            a[t + 1] = i;
            t = t + 1;
        }
    }
    for (int j = 2;
    j <= t; j++) {
        b = a[j];
        c = m - a[j];
        if (b > c)
            break;
        for (int i = t;
        i >= 2; i--) {
            if (c == a[i]) {
                cout << b << " " << c << endl;
                break;
            }
        }
    }
    return 0;
}

