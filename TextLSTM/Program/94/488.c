int main () {
    int n;
    cin >> n;
    const  int N = n;
    int a [N], b [N];
    int i, j, k = 0, h;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 1) {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 1; i < k; i++) {
        for (j = 0; j < k - i; j++) {
            if (b[j] >= b[j + 1]) {
                h = b[j];
                b[j] = b[j + 1];
                b[j + 1] = h;
            }
        }
    }
    cout << b[0];
    for (i = 1; i < k; i++) {
        cout << "," << b[i];
    }
    return 0;
}

