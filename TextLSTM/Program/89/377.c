int main () {
    int n, a [10000], flag_a [10000], x, y, i, flag = 0;
    memset (a, 0, sizeof (a));
    memset (flag_a, 0, sizeof (flag_a));
    cin >> n;
    cin >> x >> y;
    while (x != 0 || y != 0) {
        flag_a[x] = 1;
        if (flag_a[y] != 1) {
            a[y]++;
        }
        cin >> x >> y;
    }
    for (i = 0; i < n; i++) {
        if (flag_a[i] == 0 && a[i] == n - 1) {
            cout << i << endl;
            flag = 1;
        }
    }
    if (flag == 0) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}

