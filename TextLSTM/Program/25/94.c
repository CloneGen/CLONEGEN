int main () {
    int num [100] = {0}, N, i, j, wei = 1;
    cin >> N;
    if (N == 0)
        cout << 1;
    if (N == 1)
        cout << 2;
    if (N > 1) {
        num[0] = 2;
        for (i = 2; i <= N; i++) {
            for (j = 0; j <= 99; j++) {
                num[j] *= 2;
            }
            for (j = 0; j <= 99; j++) {
                if (num[j] >= 10) {
                    num[j] -= 10;
                    num[j + 1]++;
                }
            }
        }
        j = 99;
        while (num[j] == 0)
            j--;
        for (i = j; i >= 0; i--)
            cout << num[i];
    }
    return 0;
}

