int main () {
    int i = 3;
    int j = 3;
    int l1 = 2;
    int l2 = 2;
    int m, n, k;
    char a = 'y';
    cin >> m;
    n = m / 2;
    for (i = 3; i <= n; i++) {
        a = 'y';
        j = m - i;
        k = sqrt (i);
        for (l1 = 2; l1 <= k; l1++) {
            if (i % l1 == 0)
                a = 'n';
        }
        k = sqrt (j);
        for (l2 = 2; l2 <= k; l2++) {
            if (j % l2 == 0)
                a = 'n';
        }
        if (a == 'y')
            cout << i << ' ' << j << endl;
    }
    return 0;
}

