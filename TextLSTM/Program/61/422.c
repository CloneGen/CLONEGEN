int main () {
    int x [20] = {1, 1};
    for (int i = 2;
    i < 20; i++)
        x[i] = x[i - 1] + x[i - 2];
    int n = 0;
    cin >> n;
    int a [n];
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    for (int i = 0;
    i < n; i++)
        cout << x[a[i] - 1] << endl;
    return 0;
}

