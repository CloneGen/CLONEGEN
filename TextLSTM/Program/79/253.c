int main () {
    int n, m, i, a [301];
    while (cin >> n >> m && n != 0 && m != 0) {
        int k = 0, count = n;
        for (i = 1; i <= n; i++) {
            a[i] = 1;
        }
        i = 1;
        while (count != 1) {
            if (a[i] == 1) {
                k++;
                if (k % m == 0) {
                    a[i] = 0;
                    count--;
                }
            }
            if (i == n) {
                i = 1;
            }
            else {
                i++;
            }
        }
        for (i = 1; i <= n; i++) {
            if (a[i] == 1)
                cout << i << endl;
        }
    }
    return 0;
}

