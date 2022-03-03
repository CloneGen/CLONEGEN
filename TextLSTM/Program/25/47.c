int main () {
    int i, j, len, N, num [40] = {0};
    num[0] = 1;
    cin >> N;
    for (i = 1; i <= N; i++) {
        for (j = 0; j < 40; j++)
            num[j] = 2 * num[j];
        for (j = 0; j < 40; j++) {
            num[j + 1] = num[j + 1] + (num[j] - num[j] % 10) / 10;
            num[j] = num[j] % 10;
        }
    }
    for (i = 39; i >= 0; i--) {
        if (num[i]) {
            len = i;
            break;
        }
    }
    for (i = len; i >= 0; i--)
        cout << num[i];
    cout << endl;
    return 0;
}

