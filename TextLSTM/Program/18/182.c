int main () {
    int a [100] [100];
    int n, i, j, k, s1;
    cin >> n;
    for (i = 0; i < n; i++) {
        int s = 0;
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++)
                cin >> a[j][k];
        s1 = n;
        while (s1 > 1) {
            for (j = 0; j < n; j++) {
                int min = a[j][0];
                for (k = 1; k < n; k++)
                    if (a[j][k] < min)
                        min = a[j][k];
                for (k = 0; k < n; k++)
                    a[j][k] = a[j][k] - min;
            }
            for (k = 0; k < n; k++) {
                int min1 = a[0][k];
                for (j = 1; j < n; j++)
                    if (a[j][k] < min1)
                        min1 = a[j][k];
                for (j = 0; j < n; j++)
                    a[j][k] = a[j][k] - min1;
            }
            s = s + a[1][1];
            s1 = s1 - 1;
            for (j = 2; j < n; j++)
                for (k = 0; k < n; k++)
                    a[j - 1][k] = a[j][k];
            for (k = 2; k < n; k++)
                for (j = 0; j < n; j++)
                    a[j][k - 1] = a[j][k];
        }
        cout << s << endl;
    }
}

