int main () {
    int x, y, a, b, c, d, e;
    scanf ("%d", &x);
    a = x / 10000;
    x = x % 10000;
    b = x / 1000;
    x = x % 1000;
    c = x / 100;
    x = x % 100;
    d = x / 10;
    x = x % 10;
    e = x;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                if (d == 0) {
                    y = e;
                    printf ("%d", y);
                }
                else {
                    y = 10 * e + d;
                    if (e == 0)
                        printf ("0%d", y);
                    else
                        printf ("%d", y);
                }
            }
            else {
                y = 100 * e + 10 * d + c;
                if (e == 0) {
                    if (d == 0)
                        printf ("00%d", y);
                    else
                        printf ("0%d", y);
                }
                else
                    printf ("%d", y);
            }
        }
        else {
            y = 1000 * e + 100 * d + 10 * c + b;
            if (e == 0) {
                if (d == 0) {
                    if (c == 0)
                        printf ("000%d", y);
                    else
                        printf ("00%d", y);
                }
                else
                    printf ("0%d", y);
            }
            else
                printf ("%d", y);
        }
    }
    else {
        y = 10000 * e + 1000 * d + 100 * c + 10 * b + a;
        if (e == 0) {
            if (d == 0) {
                if (c == 0) {
                    if (b == 0)
                        printf ("0000%d", y);
                    else
                        printf ("000%d", y);
                }
                else
                    printf ("00%d", y);
            }
            else
                printf ("0%d", y);
        }
        else
            printf ("%d", y);
    }
    return 0;
}

