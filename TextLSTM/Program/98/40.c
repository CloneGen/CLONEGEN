int main () {
    int m;
    int i, j, k;
    cin >> m;
    int b [m];
    char a [m] [40];
    char (*p) [40];
    p = a;
    int *q;
    q = b;
    for (i = 0; i <= m - 1; i++)
        cin >> *(p + i);
    for (i = 0; i <= m - 1; i++)
        *(q + i) = strlen (a[i]);
    int c = 0;
    k = 0;
    p = a;
    q = b;
    for (i = 0; i < m; i++) {
        k = k + q[i] + 1;
        if (k > 81) {
            for (j = c; j < i - 1; j++)
                cout << *(p + j) << " ";
            cout << *(p + j) << endl;
            k = 0;
            c = i;
            i--;
        }
        else {
            if (i == m - 1) {
                for (j = c; j < i; j++)
                    cout << *(p + j) << " ";
                cout << *(p + j) << endl;
            }
        }
    }
    return 0;
}

