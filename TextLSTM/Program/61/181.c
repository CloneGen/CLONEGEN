int main () {
    int n = 0, iNum = 0;
    int a [20] = {1, 1};
    for (int i = 2;
    i < 20; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    cin >> n;
    int b [n];
    for (int j = 1;
    j <= n; j++) {
        cin >> iNum;
        b[j - 1] = a[iNum - 1];
    }
    for (int k = 1;
    k <= n; k++) {
        cout << b[k - 1] << endl;
    }
    return 0;
}

