void main () {
    char string [400];
    int a [50], i, t = 0, n = 0, b [50], max = 0, min = 100000, x1, x2, y1, y2, l, x, y;
    gets (string);
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            a[t] = i;
            t++;
        }
    }
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ')
            n++;
    }
    l = strlen (string);
    b[0] = a[0] + 1;
    b[n] = l - a[n - 1];
    for (i = 1; i < n; i++) {
        b[i] = a[i] - a[i - 1];
    }
    for (i = 0; i <= n; i++) {
        if (b[i] > max)
            max = b[i];
    }
    for (i = 0; i <= n; i++) {
        if (b[i] == max) {
            x = i;
            if (x == n) {
                x1 = a[i - 1];
                y1 = l;
            }
            else {
                x1 = a[i - 1];
                y1 = a[i];
            }
            break;
        }
    }
    if (x1 == 0) {
        for (i = x1; i <= y1 - 1; i++)
            printf ("%c", string[i]);
    }
    else {
        for (i = x1 + 1; i < y1; i++)
            printf ("%c", string[i]);
    }
    printf ("\n");
    for (i = 0; i <= n; i++) {
        if (b[i] < min)
            min = b[i];
    }
    for (i = 0; i <= n; i++) {
        if (b[i] == min) {
            y = i;
            if (y == n) {
                x2 = a[i - 1];
                y2 = l;
            }
            else {
                x2 = a[i - 1];
                y2 = a[i];
            }
            break;
        }
    }
    if (x2 == 0) {
        for (i = x2; i <= y2 - 1; i++)
            printf ("%c", string[i]);
    }
    else {
        for (i = x2 + 1; i <= y2 - 1; i++)
            printf ("%c", string[i]);
    }
}

