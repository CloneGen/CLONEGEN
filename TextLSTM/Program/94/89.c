int main () {
    int n, a [500], b [500];
    cin >> n;
    int k = 1;
    for (int i = 1;
    i <= n; i++) {
        cin >> a[i];
        int z = a[i] % 2;
        if (z == 1) {
            b[k] = a[i];
            k++;
        }
    }
    for (int i = 1;
    i < k; i++) {
        int p = 10000, m;
        for (int j = i;
        j < k; j++)
            if (b[j] < p) {
                p = b[j];
                m = j;
            }
        int t;
        t = b[i];
        b[i] = b[m];
        b[m] = t;
    }
    for (int i = 1;
    i < k; i++) {
        if (i == 1)
            cout << b[i];
        else
            cout << "," << b[i];
    }
    return 0;
}

