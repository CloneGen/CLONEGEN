int main () {
    int k, i, j, a, b, c, m, n;
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        m = 0;
        n = 0;
        scanf ("%d %d %d", &a, &b, &c);
        if (((a % 4 == 0) && (a % 100 != 0)) || ((a % 100 == 0) && (a % 400 == 0))) {
            for (j = 1; j < b; j++) {
                if (j == 1)
                    m += 31;
                if (j == 2)
                    m += 29;
                if (j == 3)
                    m += 31;
                if (j == 4)
                    m += 30;
                if (j == 5)
                    m += 31;
                if (j == 6)
                    m += 30;
                if (j == 7)
                    m += 31;
                if (j == 8)
                    m += 31;
                if (j == 9)
                    m += 30;
                if (j == 10)
                    m += 31;
                if (j == 11)
                    m += 30;
            }
            for (j = 1; j < c; j++) {
                if (j == 1)
                    n += 31;
                if (j == 2)
                    n += 29;
                if (j == 3)
                    n += 31;
                if (j == 4)
                    n += 30;
                if (j == 5)
                    n += 31;
                if (j == 6)
                    n += 30;
                if (j == 7)
                    n += 31;
                if (j == 8)
                    n += 31;
                if (j == 9)
                    n += 30;
                if (j == 10)
                    n += 31;
                if (j == 11)
                    n += 30;
            }
        }
        else {
            for (j = 1; j < b; j++) {
                if (j == 1)
                    m += 31;
                if (j == 2)
                    m += 28;
                if (j == 3)
                    m += 31;
                if (j == 4)
                    m += 30;
                if (j == 5)
                    m += 31;
                if (j == 6)
                    m += 30;
                if (j == 7)
                    m += 31;
                if (j == 8)
                    m += 31;
                if (j == 9)
                    m += 30;
                if (j == 10)
                    m += 31;
                if (j == 11)
                    m += 30;
            }
            for (j = 1; j < c; j++) {
                if (j == 1)
                    n += 31;
                if (j == 2)
                    n += 28;
                if (j == 3)
                    n += 31;
                if (j == 4)
                    n += 30;
                if (j == 5)
                    n += 31;
                if (j == 6)
                    n += 30;
                if (j == 7)
                    n += 31;
                if (j == 8)
                    n += 31;
                if (j == 9)
                    n += 30;
                if (j == 10)
                    n += 31;
                if (j == 11)
                    n += 30;
            }
        }
        if ((m - n) % 7 == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
}

