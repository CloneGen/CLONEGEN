int main () {
    int n = 0;
    char sum [101];
    int i = 0;
    cin >> n;
    char *p = &sum[1];
    memset (sum, '0', sizeof (sum));
    *p = '1';
    for (i = 1; i <= n; i++) {
        p = &sum[100];
        while (1) {
            if ((*p - '0') * 2 >= 20) {
                (*(p + 1)) += 2;
                *p = (*p - '0') * 2 % 20 + '0';
            }
            else if ((*p - '0') * 2 >= 10 && (*p - '0') * 2 < 20) {
                (*(p + 1))++;
                *p = (*p - '0') * 2 % 10 + '0';
            }
            else
                *p = (*p - '0') * 2 + '0';
            p--;
            if (p == &sum[0])
                break;
        }
    }
    for (i = 1; i <= 100; i++)
        if (sum[i] - '0' >= 10) {
            sum[i + 1]++;
            sum[i] = sum[i] % 10;
        }
    for (i = 100; i >= 1; i--)
        if (sum[i] - '0' > 0)
            break;
    for (; i > 0; i--)
        cout << sum[i];
    return 0;
}

