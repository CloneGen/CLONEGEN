int main () {
    int N;
    int i, j, k;
    int num [100];
    int result [100];
    cin >> N;
    memset (num, 0, sizeof (num));
    memset (result, 0, sizeof (result));
    result[0] = 1;
    for (i = 0; i < N; i++) {
        j = 0;
        for (k = 0; k < 100; k++)
            num[j++] = result[k];
        memset (result, 0, sizeof (result));
        for (j = 0; j < 100; j++)
            result[j] = 2 * num[j];
        for (j = 0; j < 100; j++) {
            if (result[j] >= 10) {
                result[j + 1] += result[j] / 10;
                result[j] %= 10;
            }
        }
    }
    j = 99;
    while (result[j] == 0)
        j--;
    for (; j >= 0; j--)
        cout << result[j];
    cout << endl;
    return 0;
}

