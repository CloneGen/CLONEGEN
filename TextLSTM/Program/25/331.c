int main () {
    int n;
    cin >> n;
    int number [101], flag [101] = {0};
    memset (number, -1, sizeof (number));
    number[100] = 1;
    int i, j;
    for (j = 1; j <= n; j++) {
        for (i = 100; number[i] != -1; i--)
            if (number[i] * 2 > 9) {
                number[i] = number[i] * 2 - 10;
                flag[i - 1] = 1;
            }
            else
                number[i] *= 2;
        for (i = 99; number[i + 1] != -1; i--)
            if (flag[i] == 1)
                if (number[i] != -1)
                    number[i]++;
                else
                    number[i] = 1;
        memset (flag, 0, sizeof (flag));
    }
    int noZero = 0;
    while (number[noZero] == -1)
        noZero++;
    for (j = noZero; j <= 100; j++)
        cout << number[j];
    cout << endl;
    return 0;
}

