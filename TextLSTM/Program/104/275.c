int main () {
    int a [10], b [10], m, n, i, ceng1, ceng2;
    scanf ("%d%d", &m, &n);
    for (i = 0; i <= 9; i++)
        a[i] = -1;
    for (i = 0; i <= 9; i++)
        b[i] = -2;
    a[0] = m;
    b[0] = n;
    if (m == 1 || n == 1)
        printf ("1");
    else {
        for (i = 1; i <= 9; i++) {
            a[i] = a[i - 1] / 2;
            if (a[i] == 1) {
                ceng1 = i;
                break;
            }
        }
        for (i = 1; i <= 9; i++) {
            b[i] = b[i - 1] / 2;
            if (b[i] == 1) {
                ceng2 = i;
                break;
            }
        }
        for (i = 1; i <= 10; i++) {
            if (a[ceng1 + 1 - i] == b[ceng2 + 1 - i] && a[ceng1 - i] != b[ceng2 - i]) {
                printf ("%d", a[ceng1 + 1 - i]);
                break;
            }
        }
    }
    return 0;
}

