int main () {
    int x, y, i, j, k1 [1000], k2 [1000], m = 0, n = 0;
    cin >> x >> y;
    for (i = 0; x >= 1; i++) {
        k1[i] = x;
        x = (x - x % 2) / 2;
        m++;
    }
    for (i = 0; y >= 1; i++) {
        k2[i] = y;
        y = (y - y % 2) / 2;
        n++;
    }
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (k1[i] == k2[j]) {
                cout << k1[i];
                i = 1001;
            }
    return 0;
}

