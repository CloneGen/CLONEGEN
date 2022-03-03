int main () {
    int N, i, j, k;
    char a [50];
    memset (a, 0, sizeof (a));
    cin >> N;
    if (N >= 1)
        a[0] = '2';
    else
        a[0] = '1';
    j = 0;
    for (i = 2; i <= N; i++) {
        k = 0;
        for (j = 0; a[j]; j++) {
            a[j] = ((a[j] - '0') * 2) + k + '0';
            k = 0;
            if (a[j] > '9') {
                a[j] -= 10;
                k = 1;
            }
        }
        if (k == 1)
            a[j] = '1';
    }
    if (a[j])
        cout << a[j];
    for (j -= 1; j >= 0; j--)
        cout << a[j];
    cout << endl;
    return 0;
}

