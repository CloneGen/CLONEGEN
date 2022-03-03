int main () {
    int x, a [16], i, j, n = 0, num = 0, m;
    while (1) {
        cin >> m;
        if (m == -1)
            break;
        else {
            a[1] = m;
            n = 1;
        }
        for (i = 2;; i++) {
            cin >> x;
            if (x == 0)
                break;
            else {
                a[i] = x;
                n = n + 1;
            }
        }
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (a[i] == (2 * a[j]))
                    num = num + 1;
            }
        }
        cout << num << endl;
        num = 0;
    }
    return 0;
}

