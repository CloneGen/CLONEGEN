int main () {
    int num [101] = {0};
    int N, q, i, j = 0;
    cin >> N;
    num[0] = 1;
    for (q = 1; q <= N; q++) {
        for (i = 0; i <= 100; i++)
            num[i] = num[i] * 2;
        for (i = 0; i <= 100; i++)
            if (num[i] >= 10) {
                num[i + 1] = num[i + 1] + num[i] / 10;
                num[i] = num[i] % 10;
            }
    }
    i = 100;
    while (num[i] == 0) {
        i--;
    }
    for (j = i; j >= 0; j--)
        cout << num[j];
    return 0;
}

