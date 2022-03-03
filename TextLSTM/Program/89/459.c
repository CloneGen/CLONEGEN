int main () {
    int a [10000] = {0};
    int i, j, n;
    cin >> n;
    cin >> i >> j;
    while ((i != 0) || (j != 0)) {
        a[i] = -1;
        a[j]++;
        cin >> i >> j;
    }
    for (i = 0; i < n; i++)
        if (a[i] == n - 1) {
            cout << i << endl;
            return 0;
        }
    cout << "NOT FOUND" << endl;
    return 0;
}

