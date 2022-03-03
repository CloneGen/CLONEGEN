int main () {
    int n = 0, i = 0, k = 0;
    int c = 0;
    cin >> n;
    int num [n];
    for (i = 0; i <= n - 1; i++) {
        cin >> k;
        num[i] = k;
    }
    int del;
    cin >> del;
    for (i = 0; i <= n - 1; i++) {
        if (num[i] != del)
            c = i;
    }
    for (i = 0; i <= c - 1; i++) {
        if (num[i] != del)
            cout << num[i] << " ";
    }
    cout << num[c];
    return 0;
}

