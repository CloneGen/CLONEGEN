int main () {
    int n, i, j, k, p, l, temp, sum [600], real [600], realreal [600] [3];
    char s [600], a [600] [6] = {'\0'}, b [600] [6] = {'\0'};
    scanf ("%d", &n);
    scanf ("%s", s);
    l = strlen (s);
    for (i = 0; i <= 599; i++)
        sum[i] = 1;
    for (i = 0; i <= l - n; i++)
        for (j = 0; j <= n - 1; j++)
            a[i][j] = s[i + j];
    for (i = 1; i <= l - n; i++) {
        for (j = 0; j <= i - 1; j++) {
            if (strcmp (a[i], a[j]) == 0)
                sum[i]++;
        }
    }
    k = 0;
    real[0] = sum[l - n];
    for (i = 0; i <= n - 1; i++)
        b[0][i] = a[l - n][i];
    for (i = l - n - 1; i >= 0; i--) {
        for (j = l - n; j >= i + 1; j--) {
            if (strcmp (a[i], a[j]) == 0)
                break;
        }
        if (j == i) {
            k++;
            real[k] = sum[i];
            for (p = 0; p <= n - 1; p++)
                b[k][p] = a[i][p];
        }
    }
    for (i = 0; i <= k; i++) {
        realreal[i][0] = real[i];
        realreal[i][1] = i;
    }
    if (k == 0) {
        printf ("%d\n", l - n + 1);
        for (i = 0; i <= n - 1; i++)
            printf ("%c", a[0][i]);
        printf ("\n");
    }
    else {
        for (i = 0; i <= k - 1; i++) {
            for (j = i + 1; j <= k; j++) {
                if (realreal[i][0] < realreal[j][0]) {
                    temp = realreal[i][0];
                    realreal[i][0] = realreal[j][0];
                    realreal[j][0] = temp;
                    temp = realreal[i][1];
                    realreal[i][1] = realreal[j][1];
                    realreal[j][1] = temp;
                }
            }
        }
        if (realreal[0][0] == 1)
            printf ("NO");
        else {
            for (i = 1; i <= k; i++) {
                if (realreal[i][0] != realreal[0][0])
                    break;
            }
            printf ("%d\n", realreal[0][0]);
            for (p = 0; p <= i - 1; p++) {
                for (j = 0; j <= l - n; j++) {
                    if (strcmp (b[realreal[p][1]], a[j]) == 0) {
                        realreal[p][2] = j;
                        break;
                    }
                }
            }
            if (i >= 2) {
                for (p = 0; p <= i - 2; p++) {
                    for (j = p + 1; j <= i - 1; j++) {
                        if (realreal[p][2] > realreal[j][2]) {
                            temp = realreal[p][2];
                            realreal[p][2] = realreal[j][2];
                            realreal[j][2] = temp;
                            temp = realreal[p][1];
                            realreal[p][1] = realreal[j][1];
                            realreal[j][1] = temp;
                        }
                    }
                }
            }
            for (p = 0; p <= i - 1; p++) {
                for (j = 0; j <= n - 1; j++)
                    printf ("%c", a[realreal[p][2]][j]);
                printf ("\n");
            }
        }
    }
    return 0;
}

