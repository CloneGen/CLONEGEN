main () {
    int n, a, i, j, s = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &a);
            if (a == 0)
                break;
        }
        for (j++; j < n; j++) {
            scanf ("%d", &a);
            if (a == 255)
                s++;
            else
                break;
        }
        for (j++; j < n; j++) {
            scanf ("%d", &a);
        }
    }
    printf ("%d", s);
}

