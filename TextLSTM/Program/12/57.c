int main () {
    int n, i, j, k, ds, s;
    int a [16];
    while (cin) {
        ds = 0;
        cin >> a[0];
        if (a[0] == -1)
            return 0;
        s = 1;
        while (cin) {
            cin >> a[s];
            if (a[s] == 0)
                break;
            else
                s = s + 1;
        }
        for (i = 0; i <= s; i++) {
            for (j = i + 1; j <= s; j++) {
                if ((a[i] == a[j] * 2) || (a[j] == a[i] * 2))
                    ds = ds + 1;
            }
        }
        cout << ds << endl;
    }
    return 0;
}

