int main () {
    int n, i, j, flag = 0;
    cin >> n;
    short int num [35] = {1, 0};
    for (i = 1; i <= n; i++) {
        for (j = 0; j <= 34; j++) {
            num[j] = num[j] * 2 + flag;
            if (num[j] >= 10) {
                num[j] = num[j] - 10;
                flag = 1;
            }
            else
                flag = 0;
        }
    }
    for (j = 34; num[j] == 0; j--)
        ;
    for (; j >= 0; j--)
        cout << num[j];
    return 0;
}

