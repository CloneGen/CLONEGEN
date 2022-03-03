int main () {
    int i, n, x, y;
    int a [100000] = {0};
    cin >> n;
    while (1) {
        cin >> x >> y;
        if (x == 0 && y == 0) {
            break;
        }
        a[y]++;
    }
    for (i = 0; i < n; i++) {
        if (*(a + i) == n - 1) {
            cout << i << endl;
            break;
        }
    }
    if (i == n) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}

