void main () {
    char a [20] = {0}, b [20] = {0}, t;
    int i, j, flag = 0, n1 = 0, n2 = 0;
    scanf ("%s %s", a, b);
    n1 = strlen (a);
    n2 = strlen (b);
    for (i = 0; i < n1 - 1; i++) {
        for (j = 0; j < n1 - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < n2 - 1; i++) {
        for (j = 0; j < n2 - 1 - i; j++) {
            if (b[j] < b[j + 1]) {
                t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
            }
        }
    }
    if (n1 == n2)
        flag = 1;
    else
        flag = 0;
    if (flag = 1) {
        for (i = 0; i < n1; i++) {
            if (a[i] != b[i]) {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
    }
    if (flag == 0)
        printf ("NO");
    else
        printf ("YES");
    printf ("\n");
}

