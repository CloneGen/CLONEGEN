int main () {
    int N, x, t;
    cin >> N;
    int a [N +1], i = 0, m = 0;
    while (N > 0) {
        cin >> x;
        if (x % 2 != 0) {
            a[i] = x;
            m++;
            i++;
        }
        N--;
    }
    for (int j = 0;
    j < m - 1; j++)
        for (int k = 0;
        k < m - j - 1; k++) {
            if (a[k] > a[k + 1]) {
                t = a[k];
                a[k] = a[k + 1];
                a[k + 1] = t;
            }
        }
    cout << a[0];
    for (int j = 1;
    j < m; j++)
        cout << ',' << a[j];
    return 0;
}

