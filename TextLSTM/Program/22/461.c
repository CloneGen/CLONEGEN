void main () {
    int a [300], i, j, k, n = 0, b, x;
    char str [1202], t [300] [5];
    gets (str);
    j = 0;
    k = 0;
    for (i = 0; str[i] != 0; i++) {
        if ((str[i] <= '9' && str[i] >= '0') && (str[i + 1] <= '9' && str[i + 1] >= '0')) {
            t[j][k] = str[i];
            k++;
        }
        if ((str[i] <= '9' && str[i] >= '0') && (str[i + 1] > '9' || str[i + 1] < '0')) {
            t[j][k] = str[i];
            k = 0;
            j++;
            n++;
            t[j][k + 1] = '\0';
        }
    }
    if (j == 1)
        printf ("No\n");
    else {
        for (i = 0; i < n; i++) {
            sscanf (t[i], "%d", &a[i]);
        }
        x = a[0];
        for (i = 0; i < n; i++) {
            if (a[i] != x)
                break;
        }
        if (i < n) {
            for (i = 1; i < n; i++) {
                for (j = 0; j < n - i; j++) {
                    if (a[j] < a[j + 1]) {
                        b = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = b;
                    }
                }
            }
            x = a[0];
            for (i = 0; i < n; i++) {
                if (a[i] != x)
                    break;
            }
            printf ("%d\n", a[i]);
        }
        else
            printf ("No\n");
    }
}

