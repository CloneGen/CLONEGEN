int main () {
    int x, a [3], i = 0, j;
    scanf ("%d", &x);
    if (x % 3 == 0) {
        a[i] = 3;
        i++;
    }
    if (x % 5 == 0) {
        a[i] = 5;
        i++;
    }
    if (x % 7 == 0) {
        a[i] = 7;
        i++;
    }
    if (i == 0)
        printf ("n");
    if (i == 1)
        printf ("%d", a[0]);
    if (i > 1) {
        for (j = 0; j < i - 1; j++)
            printf ("%d ", a[j]);
        printf ("%d", a[i - 1]);
    }
    return 0;
}

