int main () {
    int a [100001] = {0}, b, n, k = 0, j;
    cin >> n;
    for (int i = 0;
    i <= n - 1; i++) {
        cin >> a[i];
    }
    cin >> b;
    for (j = 0; j <= (n - 1); j++) {
        if (a[j] != b) {
            cout << a[j];
            break;
        }
    }
    for (int l = j + 1;
    l <= (n - 1); l++) {
        if (a[l] != b)
            cout << " " << a[l];
    }
    return 0;
}

