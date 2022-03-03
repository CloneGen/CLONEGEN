main () {
    double n, m;
    scanf ("%lf", &n);
    char a [100];
    scanf ("%s", a);
    char b [100];
    scanf ("%s", b);
    int i, j, k;
    int count1 = 0, count2 = 0, count = 0;
    for (i = 0; a[i] != '\0'; i++)
        count1++;
    for (i = 0; b[i] != '\0'; i++)
        count2++;
    if (count1 != count2)
        printf ("error");
    else {
        for (j = 0; j < count1; j++) {
            if ((a[j] == 'A' || a[j] == 'T' || a[j] == 'C' || a[j] == 'G') && (b[j] == 'A' || b[j] == 'T' || b[j] == 'C' || b[j] == 'G')) {
                if (a[j] == b[j])
                    count++;
                if (j == (count1 - 1)) {
                    m = ((double) count / (double) count1);
                    if (m >= n)
                        printf ("yes");
                    else
                        printf ("no");
                }
            }
            else {
                printf ("error");
                break;
            }
        }
    }
}

