void main () {
    int a [300], i, j, k, x;
    scanf ("%d", &a[0]);
    for (i = 1; getchar () == ','; i++) {
        scanf ("%d", &a[i]);
    }
    k = i;
    for (j = 0; j < k - 1; j++) {
        for (i = j; i < k; i++) {
            if (a[j] < a[i])
                x = a[j], a[j] = a[i], a[i] = x;
        }
    }
    for (i = 1, x = -1; i < k; i++) {
        if (a[i] < a[0]) {
            x = a[i];
            break;
        }
    }
    if (x == -1)
        printf ("No");
    else
        printf ("%d", x);
}

