int main () {
    int i, a, b, c, k;
    char z [500], x [500], y [500];
    scanf ("%s", x);
    scanf ("%s", y);
    a = strlen (x);
    b = strlen (y);
    if (a >= b) {
        for (i = 0, k = 0; i < b; i++) {
            z[a - 1 - i] = x[a - 1 - i] + y[b - 1 - i] + k - 48;
            if (z[a - 1 - i] > '9') {
                z[a - 1 - i] = z[a - 1 - i] - 10;
                k = 1;
            }
            else
                k = 0;
        }
        for (i = 0; i < a - b; i++) {
            z[a - b - 1 - i] = x[a - b - 1 - i] + k;
            if (z[a - b - 1 - i] > '9') {
                z[a - b - 1 - i] = z[a - b - 1 - i] - 10;
                k = 1;
            }
            else
                k = 0;
        }
        c = a;
        if (k == 1) {
            for (i = a; i > 0; i--)
                z[i] = z[i - 1];
            z[0] = '1';
            c++;
        }
    }
    else {
        for (i = 0, k = 0; i < a; i++) {
            z[b - 1 - i] = x[a - 1 - i] + y[b - 1 - i] + k - 48;
            if (z[b - 1 - i] > '9') {
                z[b - 1 - i] = z[b - 1 - i] - 10;
                k = 1;
            }
            else
                k = 0;
        }
        for (i = 0; i < b - a; i++) {
            z[b - a - 1 - i] = y[b - a - 1 - i] + k;
            if (z[b - a - 1 - i] > '9') {
                z[b - a - 1 - i] = z[b - a - 1 - i] - 10;
                k = 1;
            }
            else
                k = 0;
        }
        c = b;
        if (k == 1) {
            for (i = b; i > 0; i--)
                z[i] = z[i - 1];
            z[0] = '1';
            c++;
        }
    }
    for (i = 0; i < c; i++) {
        if (z[i] != '0')
            break;
        if (i == c - 1) {
            printf ("0");
            i++;
        }
    }
    for (; i < c; i++)
        printf ("%c", z[i]);
    return 0;
}

