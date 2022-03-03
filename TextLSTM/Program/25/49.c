int main () {
    int n, i, j, k, l, len;
    int num [110] = {0};
    cin >> n;
    if (n == 0)
        cout << "1";
    else {
        num[0] = 1;
        len = 1;
        for (i = 1; i <= n; i++) {
            for (k = 0; k < len; k++) {
                num[k] *= 2;
            }
            for (l = 0; l < len; l++) {
                if (num[l] >= 10) {
                    num[l + 1] += num[l] / 10;
                    num[l] %= 10;
                }
            }
            if (num[len] != 0)
                len++;
        }
        for (j = len - 1; j >= 0; j--)
            cout << num[j];
    }
    return 0;
}

