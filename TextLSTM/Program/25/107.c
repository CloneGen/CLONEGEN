int b [1000] = {0};
int L = 1;

void highcal (int n, char a [], int l) {
    int i, g = 0;
    if (n == 0)
        ;
    else {
        g = 0;
        for (i = 0; i < l; i++) {
            b[i] = a[i] - '0';
            b[i] = b[i] * 2;
        }
        for (i = 0; i < l; i++) {
            if (b[i] > 9) {
                b[i] = b[i] - 10;
                b[i + 1]++;
            }
            a[i] = b[i] + '0';
        }
        if (b[l] != 0) {
            a[l] = '1';
            L = l + 1;
            g = 1;
        }
        if (g == 1)
            highcal (n - 1, a, l + 1);
        else
            highcal (n - 1, a, l);
    }
}

int main () {
    char a [1000];
    int n, i, l;
    int sum = 1;
    cin >> n;
    a[0] = '1';
    l = 1;
    highcal (n, a, l);
    for (i = L -1; i >= 0; i--)
        cout << a[i];
    return 0;
}

