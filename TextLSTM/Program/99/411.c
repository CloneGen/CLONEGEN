int main () {
    int n;
    double a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    int e [n];
    for (int k = 0;
    k < n; k++)
        cin >> e[k];
    for (int k = 0;
    k < n; k++) {
        if (e[k] <= 18)
            a++;
        if (e[k] >= 19 && e[k] <= 35)
            b++;
        if (e[k] >= 36 && e[k] <= 60)
            c++;
        if (e[k] >= 61)
            d++;
    }
    a = a / n * 100;
    b = b / n * 100;
    c = c / n * 100;
    d = d / n * 100;
    printf ("1-18:");
    printf (" ");
    printf ("%.2f", a);
    printf ("%%");
    printf ("\n");
    printf ("19-35:");
    printf (" ");
    printf ("%.2f", b);
    printf ("%%");
    printf ("\n");
    printf ("36-60:");
    printf (" ");
    printf ("%.2f", c);
    printf ("%%");
    printf ("\n");
    printf ("60??:");
    printf (" ");
    printf ("%.2f", d);
    printf ("%%");
    printf ("\n");
    return 0;
}

