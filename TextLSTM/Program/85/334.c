void main () {
    char a [100] [20];
    int n, i, j, l, flag = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", a[i]);
    }
    for (i = 0; i < n; i++) {
        flag = 0;
        l = strlen (a[i]);
        if (l > 31) {
            printf ("no\n");
            continue;
        }
        if (a[i][0] < 'A' || a[i][0] > 'z') {
            printf ("no\n");
            continue;
        }
        if (a[i][0] > 'Z' && a[i][0] < 'a' && a[i][0] != '_') {
            printf ("no\n");
            continue;
        }
        for (j = 1; j < l; j++) {
            if (a[i][j] < '0' || a[i][j] > 'z') {
                printf ("no\n");
                flag = 1;
                break;
            }
            if (a[i][j] > '9' && a[i][j] < 'A') {
                printf ("no\n");
                flag = 1;
                break;
            }
            if (a[i][j] > 'Z' && a[i][j] < 'a' && a[i][j] != '_') {
                printf ("no\n");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf ("yes\n");
    }
}

