int main () {
    int n, s = 1, j, i;
    cin >> n;
    int a [n], b [n];
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    b[0] = a[0];
    for (i = 1; i < n; i++) {
        for (j = 0; j < s; j++) {
            if (a[i] == b[j]) {
                break;
            }
        }
        if (j == s) {
            b[s] = a[i];
            s++;
        }
    }
    for (int i = 0;
    i < s - 1; i++)
        cout << b[i] << ' ';
    cout << b[s - 1];
    return 0;
}

