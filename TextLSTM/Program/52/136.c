int main () {
    int n, m, a [100] = {0};
    cin >> n >> m;
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0;
    j < m; j++) {
        int t = a[n - 1];
        for (int k = n - 1;
        k >= 0; k--) {
            if (k > 0) {
                *(a + k) = *(a + k - 1);
            }
            else {
                if (k == 0) {
                    *a = t;
                    t = *(a + n - 1);
                }
            }
        }
    }
    int mark = 0;
    for (int i1 = 0;
    i1 < n; i1++) {
        if (mark == 0) {
            cout << *(a + i1);
            mark++;
        }
        else {
            cout << " " << *(a + i1);
        }
    }
    return 0;
}

