int main () {
    int n, i, j, k, cn;
    cin >> n;
    int a [n];
    cn = 0;
    for (i = 0; i < n; i++) {
        cin >> k;
        for (j = 0; j <= cn; j++)
            if (a[j] == k)
                break;
        if (j == cn + 1) {
            a[cn] = k;
            cn++;
        }
    }
    for (i = 0; i < cn - 1; i++)
        cout << a[i] << " ";
    cout << a[cn - 1];
    return 0;
}

