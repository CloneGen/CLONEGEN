int main () {
    int n, i1, i2, i3, flag = 1;
    int a [20000];
    scanf ("%d", &n);
    for (i1 = 0; i1 < n; i1++)
        scanf ("%d", &a[i1]);
    printf ("%d", a[0]);
    for (i2 = 1; i2 < n; i2++) {
        flag = 1;
        for (i3 = 0; i3 < i2; i3++) {
            if (a[i2] == a[i3])
                flag *= 0;
        }
        if (flag == 1)
            printf (" %d", a[i2]);
    }
    return 0;
}

