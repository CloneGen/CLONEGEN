int main () {
    char a [300], b [300], c [300];
    scanf ("%s", a);
    scanf ("%s", b);
    int t, a1, a2, i, j;
    a1 = strlen (a);
    a2 = strlen (b);
    if (a1 < a2) {
        strcpy (c, a);
        strcpy (a, b);
        strcpy (b, c);
        t = a1;
        a1 = a2;
        a2 = t;
    }
    int d;
    for (i = a2 - 1, j = a1 - 1; i > 0; i--, j--) {
        d = a[j] + b[i] - '0' - '0';
        a[j] = d % 10 + '0';
        if (d > 9)
            a[j - 1]++;
    }
    a[a1 - a2] = a[a1 - a2] + b[0] - '0';
    for (i = a1 - a2; i > 0; i--)
        if (a[i] > '9') {
            a[i] = a[i] - 10;
            a[i - 1]++;
        }
    if (a[0] > '9') {
        a[0] = a[0] - 10;
        printf ("1");
        printf ("%s", a);
    }
    else {
        for (i = 0; i < a1; i++)
            if (a[i] != '0')
                break;
        if (i == a1)
            printf ("0");
        else {
            for (j = i; j < a1; j++)
                printf ("%c", a[j]);
        }
    }
}

