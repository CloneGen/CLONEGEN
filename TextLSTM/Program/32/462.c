int main () {
    int n, len1, len2, k, m, g, e [101] = {0};
    char a [101], b [101];
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        int c [101] = {0};
        int d [101] = {0};
        cin.get ();
        k = 0;
        m = 0;
        cin.getline (a, 101);
        cin.getline (b, 101);
        len1 = strlen (a);
        len2 = strlen (b);
        for (int j = len1 - 1;
        j >= 0; j--) {
            c[k++] = a[j] - '0';
        }
        for (int l = len2 - 1;
        l >= 0; l--) {
            d[m++] = b[l] - '0';
        }
        for (int f = 0;
        f <= len1 - 1; f++) {
            if (c[f] >= d[f]) {
                e[f] = c[f] - d[f];
            }
            else {
                e[f] = c[f] + 10 - d[f];
                c[f + 1]--;
            }
        }
        g = len1 - 1;
        while (e[g] == 0) {
            g--;
        }
        for (; g >= 0; g--) {
            cout << e[g];
        }
        cout << endl;
    }
    return 0;
}

