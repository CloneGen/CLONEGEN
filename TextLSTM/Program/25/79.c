int main () {
    int a [32] = {0}, n, p;
    cin >> n;
    a[0] = 1;
    for (int i = 1;
    i <= n; i++) {
        for (int j = 0;
        j < 32; j++) {
            a[j] = a[j] * 2;
        }
        for (int k = 0;
        k < 32; k++) {
            if (a[k] >= 10) {
                a[k] -= 10;
                a[k + 1]++;
            }
        }
    }
    p = 31;
    while (a[p] == 0) {
        p--;
    }
    for (; p >= 0; p--) {
        cout << a[p];
    }
    cout << endl;
    return 0;
}

