int main () {
    int n, i, a;
    int feibo [20];
    feibo[0] = 1;
    feibo[1] = 1;
    for (i = 2; i <= 19; i++)
        feibo[i] = feibo[i - 1] + feibo[i - 2];
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        cout << feibo[a - 1];
        if (i != n)
            cout << endl;
    }
    return 0;
}

