int main () {
    int n, a [200], b [200], i, x = 0, y = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d %d", &a[i], &b[i]);
    }
    for (i = 0; i < n; i++) {
        if ((a[i] == 0 && b[i] == 1) || (a[i] == 1 && b[i] == 2) || (a[i] == 2 && b[i] == 0))
            x++;
        else if ((a[i] == 1 && b[i] == 0) || (a[i] == 2 && b[i] == 1) || (a[i] == 0 && b[i] == 2))
            y++;
    }
    if (x > y)
        printf ("A");
    else if (x < y)
        printf ("B");
    else if (x = y)
        printf ("Tie");
    return 0;
}

