int main () {
    int n, num [1000] = {0}, i, j, len;
    cin >> n;
    num[0] = 1;
    for (i = 1; i <= n; i++) {
        for (j = 999; j >= 0; j--) {
            if (num[j] != 0) {
                len = j;
                break;
            }
        }
        for (j = 0; j <= len; j++)
            num[j] *= 2;
        for (j = 0; j <= len; j++) {
            if (num[j] >= 10) {
                num[j + 1] += num[j] / 10;
                num[j] = num[j] % 10;
            }
        }
    }
    for (j = 999; j >= 0; j--) {
        if (num[j] != 0) {
            len = j;
            break;
        }
    }
    for (i = len; i >= 0; i--)
        cout << num[i];
    cout << endl;
    return 0;
}

