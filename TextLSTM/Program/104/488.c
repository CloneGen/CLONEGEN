void main () {
    int x, y, n1, n2, i, j, t, number = 0;
    int a [1000] = {0}, b [1000] = {0};
    scanf ("%d%d", &x, &y);
    for (i = 1;; i++) {
        if (x >= pow (2, i - 1) && x < pow (2, i)) {
            n1 = i;
            break;
        }
    }
    for (i = 1;; i++) {
        if (y >= pow (2, i - 1) && y < pow (2, i)) {
            n2 = i;
            break;
        }
    }
    a[n1] = x;
    b[n2] = y;
    for (i = n1; i >= 2; i--) {
        if (a[i] % 2 == 0) {
            t = (a[i] - pow (2, i - 1)) / 2;
            a[i - 1] = pow (2, i - 2) + t;
        }
        else {
            t = (a[i] - 1 - pow (2, i - 1)) / 2;
            a[i - 1] = pow (2, i - 2) + t;
        }
    }
    for (j = n2; j >= 2; j--) {
        if (b[j] % 2 == 0) {
            t = (b[j] - pow (2, j - 1)) / 2;
            b[j - 1] = pow (2, j - 2) + t;
        }
        else {
            t = (b[j] - 1 - pow (2, j - 1)) / 2;
            b[j - 1] = pow (2, j - 2) + t;
        }
    }
    for (i = 1; i <= n1 || i <= n2; i++) {
        if (a[i] == b[i]) {
            number = number + 1;
        }
        else {
            break;
        }
    }
    printf ("%d\n", a[number]);
}

