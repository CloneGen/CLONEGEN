int main () {
    int n, a [1000] [61], i, j, b [1000];
    cin >> n;
    cout << endl;
    for (i = 1; i <= n; i++) {
        cin >> b[i];
        if (b[i] == 0)
            cout << 60 << endl;
        else {
            for (j = 1; j <= b[i]; j++)
                cin >> a[i][j];
            cout << endl;
            for (j = b[i]; j >= 1; j--)
                if (a[i][j] + j * 3 <= 60) {
                    cout << 60 - j * 3 << endl;
                    break;
                }
                else if ((a[i][j] + (j - 1) * 3) <= 60) {
                    cout << a[i][j] << endl;
                    break;
                }
        }
    }
    return 0;
}

