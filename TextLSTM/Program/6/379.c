int main () {
    int n, num [100] [2], i, j, k, a [100] [100] = {0}, *p = NULL, sum = 0, m;
    cin >> n;
    for (k = 0; k < n; k++) {
        cin >> num[k][0] >> num[k][1];
        sum = 0;
        for (i = 0; i < num[k][0]; i++) {
            for (j = 0; j < num[k][1]; j++) {
                cin >> a[i][j];
            }
        }
        for (m = 0; m < num[k][0]; m++) {
            if (m == 0 || m == num[k][0] - 1) {
                for (p = a[m]; p < a[m] + num[k][1]; p++)
                    sum = sum + *p;
            }
            else
                sum = sum + a[m][0] + a[m][num[k][1] - 1];
        }
        cout << sum << endl;
    }
    return 0;
}

