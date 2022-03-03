int main () {
    int a [10000] [2], n, i, j, k, flag = 1;
    int (*p) [2] = NULL;
    memset (a, 0, sizeof (a));
    p = a;
    cin >> n;
    cin >> i >> j;
    while (i != 0 || j != 0) {
        *(*(p + i)) += 1;
        *(*(p + j) + 1) += 1;
        cin >> i >> j;
    }
    for (k = 0; k < n; k++)
        if (*(*(p + k)) == 0 && *(*(p + k) + 1) == n - 1) {
            cout << k << endl;
            flag = 0;
        }
    if (flag)
        cout << "NOT FOUND" << endl;
    return 0;
}

