main () {
    char a [250], b [250], sum [251];
    int i, j = 0, k, l = 1, x, y;
    for (i = 0; i < 250; i++)
        a[i] = '0';
    for (i = 0; i < 250; i++)
        b[i] = '0';
    for (i = 0; i < 251; i++)
        sum[i] = '0';
    scanf ("%s\n%s", a, b);
    x = strlen (a);
    y = strlen (b);
    for (i = 0; i < x; i++)
        sum[250 - i] = a[x - 1 - i];
    for (i = 0; i < x; i++)
        a[i] = '0';
    for (i = 0; i < x; i++)
        a[249 - i] = sum[250 - i];
    for (i = 0; i < 251; i++)
        sum[i] = '0';
    for (i = 0; i < y; i++)
        sum[250 - i] = b[y - 1 - i];
    for (i = 0; i < y; i++)
        b[i] = '0';
    for (i = 0; i < y; i++)
        b[249 - i] = sum[250 - i];
    for (i = 0; i < 251; i++)
        sum[i] = '0';
    for (i = 0; i < 250; i++)
        sum[250 - i] = (a[249 - i] - '0') + (b[249 - i] - '0');
    for (i = 0; i < 250; i++) {
        if (sum[250 - i] + j >= 10) {
            sum[250 - i] = sum[250 - i] + j - 10 + '0';
            j = 1;
        }
        else {
            sum[250 - i] = sum[250 - i] + j + '0';
            j = 0;
        }
    }
    if (j == 1)
        sum[0] = '1';
    for (i = 0; i < 251; i++) {
        l = l + 1;
        if (sum[i] >= '1' && sum[i] <= '9') {
            k = i;
            break;
        }
    }
    if (l == 252)
        printf ("%c", sum[0]);
    else {
        for (i = k; i < 251; i++)
            printf ("%c", sum[i]);
    }
}

