int main () {
    int n, a [10000], b [10000], i, j, flag = 0;
    cin >> n;
    memset (a, 0, 10000);
    memset (b, 0, 10000);
    while (1) {
        cin >> i >> j;
        if (i == 0 && j == 0) {
            break;
        }
        else {
            a[i]++;
            b[j]++;
        }
    }
    for (i = 0; i < n; i++) {
        if (a[i] == 0 && b[i] == n - 1) {
            cout << i << endl;
            flag = 1;
        }
    }
    if (flag == 0) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}

