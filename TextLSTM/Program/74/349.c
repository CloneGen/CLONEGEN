void main () {
    int m, n, i, j, k, l, a, sum, x, y, array [100], z;
    scanf ("%d%d", &m, &n);
    for (i = m, y = 0; i <= n; i++) {
        for (j = 2, k = 0; j < i; j++)
            if (i % j == 0)
                break;
        if (j == i)
            k = 1;
        a = i;
        for (z = 0, sum = 0, l = 0; a >= 1; z++) {
            x = a % 10;
            a = a / 10;
            sum = sum * 10 + x;
        }
        if (sum == i)
            l = 1;
        if (l == 1 && k == 1) {
            array[y] = i;
            y++;
        }
    }
    if (y == 0)
        printf ("no");
    else {
        for (i = 0; i < y - 1; i++)
            printf ("%d,", array[i]);
        printf ("%d", array[i]);
    }
}

