int main () {
    int N, i, j;
    int a [100];
    int result [100];
    memset (a, 0, sizeof (a));
    memset (result, 0, sizeof (result));
    cin >> N;
    a[0] = 1;
    for (i = 1; i <= N; i++) {
        for (j = 0; j < 100; j++) {
            result[j] = a[j] * 2;
        }
        for (j = 0; j < 100; j++) {
            if (result[j] >= 10) {
                result[j + 1] += result[j] / 10;
                result[j] = result[j] % 10;
            }
        }
        for (j = 0; j < 100; j++) {
            a[j] = result[j];
        }
    }
    j = 99;
    while (a[j] == 0)
        j--;
    for (; j >= 0; j--) {
        cout << a[j];
    }
    cout << endl;
    return 0;
}

