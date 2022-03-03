isprime (int i) {
    int j, flag = 1;
    double k;
    k = sqrt (i);
    for (j = 2; j <= k; j++) {
        if (i % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main () {
    int n, i, c, a, b;
    scanf ("%d", &n);
    for (c = 6; c <= n; c += 2) {
        for (i = 3; i < c; i++) {
            a = isprime (i);
            if (a == 1) {
                b = c - i;
                int k;
                k = isprime (b);
                if (k == 1)
                    break;
            }
        }
        printf ("%d=%d+%d\n", c, i, b);
    }
    return 0;
}

