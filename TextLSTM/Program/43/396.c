int main () {
    int m, i, j, l, k, s;
    cin >> m;
    s = 0;
    for (i = 2, s = 0; i <= m / 2; i++) {
        for (j = 2, s = 0; j < i; j++) {
            if (i % j == 0)
                s = s + 1;
        }
        if (s == 0) {
            l = m - i;
            for (k = 2, s = 0; k < l; k++)
                if (l % k == 0)
                    s = s + 1;
        }
        if (s == 0)
            cout << i << " " << l << endl;
    }
    return 0;
}

