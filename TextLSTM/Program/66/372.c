int main () {
    long i, j, k, m, n, l, sum = 1, p, q;
    scanf ("%ld%ld%ld", &i, &j, &k);
    p = 0;
    for (m = 1; m <= 400; m++) {
        if ((m % 4 == 0 && m % 100 != 0) || (m % 100 == 0 && m % 400 == 0))
            p += 2;
        else
            p++;
    }
    sum = (i - 1) / 400 * p + 1;
    q = (i - 1) % 400 + 1;
    for (m = 1; m < q; m++) {
        if ((m % 4 == 0 && m % 100 != 0) || (m % 100 == 0 && m % 400 == 0))
            sum = sum + 2;
        else
            sum = sum + 1;
    }
    n = (sum - 1) % 7 + 1;
    if ((i % 4 == 0 && i % 100 != 0) || (i % 100 == 0 && i % 400 == 0)) {
        if (j == 1)
            l = (k - 1) % 7;
        if (j == 2)
            l = (31 + k - 1) % 7;
        if (j == 3)
            l = (60 + k - 1) % 7;
        if (j == 4)
            l = (91 + k - 1) % 7;
        if (j == 5)
            l = (121 + k - 1) % 7;
        if (j == 6)
            l = (152 + k - 1) % 7;
        if (j == 7)
            l = (182 + k - 1) % 7;
        if (j == 8)
            l = (213 + k - 1) % 7;
        if (j == 9)
            l = (244 + k - 1) % 7;
        if (j == 10)
            l = (274 + k - 1) % 7;
        if (j == 11)
            l = (305 + k - 1) % 7;
        if (j == 12)
            l = (335 + k - 1) % 7;
    }
    else {
        if (j == 1)
            l = (k - 1) % 7;
        if (j == 2)
            l = (31 + k - 1) % 7;
        if (j == 3)
            l = (59 + k - 1) % 7;
        if (j == 4)
            l = (90 + k - 1) % 7;
        if (j == 5)
            l = (120 + k - 1) % 7;
        if (j == 6)
            l = (151 + k - 1) % 7;
        if (j == 7)
            l = (181 + k - 1) % 7;
        if (j == 8)
            l = (212 + k - 1) % 7;
        if (j == 9)
            l = (243 + k - 1) % 7;
        if (j == 10)
            l = (273 + k - 1) % 7;
        if (j == 11)
            l = (304 + k - 1) % 7;
        if (j == 12)
            l = (334 + k - 1) % 7;
    }
    l = l + n;
    if (l == 1)
        printf ("Mon.");
    if (l == 2)
        printf ("Tue.");
    if (l == 3)
        printf ("Wed.");
    if (l == 4)
        printf ("Thu.");
    if (l == 5)
        printf ("Fri.");
    if (l == 6)
        printf ("Sat.");
    if (l == 7)
        printf ("Sun.");
    if (l == 8)
        printf ("Mon.");
    if (l == 9)
        printf ("Tue.");
    if (l == 10)
        printf ("Wed.");
    if (l == 11)
        printf ("Thu.");
    if (l == 12)
        printf ("Fri.");
    if (l == 13)
        printf ("Sat.");
    if (l == 14)
        printf ("Sun.");
}

