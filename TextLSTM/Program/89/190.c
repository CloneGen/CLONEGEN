int main () {
    int n, i, j, a [100000] = {0}, flag = 0;
    int *p = a;
    cin >> n;
    while (cin >> i) {
        cin >> j;
        if (i == 0 && j == 0)
            break;
        else
            (*(p + 4 * j))++;
    }
    for (; p < (a + 4 * n); p = p + 4) {
        if (*p >= n - 1) {
            cout << (p - a) / 4 << endl;
            flag = 1;
        }
    }
    if (!flag)
        cout << "NOT FOUND" << endl;
    return 0;
}

