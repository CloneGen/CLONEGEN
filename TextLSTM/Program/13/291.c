int main () {
    int n, i, j, k, num = 0;
    cin >> n;
    int a [n];
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    for (i = n - 1; i > 0; i--)
        for (k = i - 1; k >= 0; k--) {
            if (a[i] == a[k]) {
                if (i == n - 1) {
                    a[i] = 0;
                    num++;
                    break;
                }
                else {
                    for (j = i; j < n - 1; j++)
                        a[j] = a[j + 1];
                    a[j] = 0;
                    num++;
                    break;
                }
            }
        }
    cout << a[0];
    for (i = 1; i < n - num; i++)
        cout << " " << a[i];
    cout << endl;
    return 0;
}

