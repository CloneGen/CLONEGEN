int main () {
    int n, i, j, l, w, k;
    int a [200000] = {0};
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (j = 1, l = 1; j <= n; j++) {
        if (a[j] != k)
            a[l++] = a[j];
    }
    for (w = 1; w < l; w++) {
        if (w == 1)
            cout << a[1];
        else
            cout << " " << a[w];
    }
    return 0;
}

