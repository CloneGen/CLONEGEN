int main () {
    int x, y, a [20], b [20], i, j, p, q;
    scanf ("%d%d", &x, &y);
    if (x == y)
        printf ("%d", x);
    else {
        if ((x == 1) || (y == 1))
            printf ("1");
        else {
            a[0] = x;
            for (i = 1; i < 20; i++) {
                if (a[i - 1] % 2 == 0)
                    a[i] = a[i - 1] / 2;
                else
                    a[i] = (a[i - 1] - 1) / 2;
                if (a[i] == 1) {
                    p = i;
                    break;
                }
            }
            b[0] = y;
            for (i = 1; i < 20; i++) {
                if (b[i - 1] % 2 == 0)
                    b[i] = b[i - 1] / 2;
                else
                    b[i] = (b[i - 1] - 1) / 2;
                if (b[i] == 1) {
                    q = i;
                    break;
                }
            }
            for (i = 0; i <= p; i++) {
                for (j = 0; j <= q; j++) {
                    if (a[i] == b[j]) {
                        p = i;
                        break;
                    }
                }
            }
            printf ("%d", a[p]);
        }
    }
    return 0;
}

