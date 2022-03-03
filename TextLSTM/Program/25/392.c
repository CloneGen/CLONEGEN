int main () {
    int i, j, n, k = 1;
    cin >> n;
    int p [50];
    memset (p, 0, 200);
    p[0] = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 50; j++) {
            p[j] = p[j] * 2;
        }
        for (j = 0; j < 50; j++) {
            if (p[j] >= 10) {
                p[j] = p[j] % 10;
                p[j + 1] = p[j + 1] + 1;
            }
        }
    }
    for (i = 49; i >= 0; i--) {
        if (p[i] == 0 && k == 1) {
            continue;
        }
        if (p[i] != 0)
            k = 0;
        cout << p[i];
    }
    return 0;
}

