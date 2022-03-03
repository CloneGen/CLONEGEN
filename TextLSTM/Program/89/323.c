int main () {
    int i, j, n, flag = 0;
    int know [10000] = {0}, count [10000] = {0};
    cin >> n;
    while (cin >> i >> j) {
        if (i == 0 && j == 0)
            break;
        know[i]++;
        count[j]++;
    }
    for (i = 0; i < n; i++)
        if (know[i] == 0 && count[i] == n - 1) {
            cout << i << endl;
            flag = 1;
        }
    if (flag == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

