int main () {
    char a [501], b [501] [501], d [501] [501], str [501];
    int n, i, j, p = 0, q = 0, c [501], k = 0, l, s;
    scanf ("%d\n", &n);
    scanf ("%s", a);
    for (i = 0; i < 501; i++)
        c[i] = 1;
    for (i = 0; i < strlen (a) - n + 1; i++) {
        for (j = i; j < n + i; j++) {
            b[p][q] = a[j];
            q++;
        }
        p++;
        q = 0;
    }
    for (i = 0; i < p; i++) {
        for (j = i + 1; j < p; j++) {
            if (strcmp (b[i], b[j]) == 0 && b[i][0] != '&') {
                c[k] += 1;
                for (s = 0; s < n; s++) {
                    b[j][s] = '&';
                }
                strcpy (d[k], b[i]);
            }
        }
        k++;
    }
    for (i = 1; i < k; i++) {
        for (j = 0; j < k - i; j++) {
            if (c[j] < c[j + 1]) {
                l = c[j];
                c[j] = c[j + 1];
                c[j + 1] = l;
                strcpy (str, d[j]);
                strcpy (d[j], d[j + 1]);
                strcpy (d[j + 1], str);
            }
        }
    }
    if (c[0] > 1) {
        printf ("%d", c[0]);
        for (i = 0; i < k; i++) {
            if (c[i] == c[0]) {
                printf ("\n%s", d[i]);
            }
            else
                break;
        }
    }
    else
        printf ("NO");
    return 0;
}

