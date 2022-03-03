int main () {
    int n, i, j, flag, p;
    char a [1000];
    cin >> a;
    n = strlen (a);
    for (i = 2; i <= n; i++) {
        for (p = 0; p <= n - i; p++) {
            flag = 1;
            for (j = p; j < p + i; j++) {
                if (a[j] != a[2 * p + i - 1 - j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                for (j = p; j < p + i; j++)
                    cout << a[j];
                cout << endl;
            }
        }
    }
    return 0;
}

