void main () {
    int a [1000], b [1000], m [1000], i, j, k, t, x = 0, y = 0, c, d, n = 0;
    for (;;) {
        scanf ("%d", &c);
        if (c == 0)
            break;
        else {
            for (i = 0; i < c; i++)
                scanf ("%d", &a[i]);
            for (i = 0; i < c; i++)
                scanf ("%d", &b[i]);
            for (i = 0; i < c; i++) {
                for (j = i; j < c; j++) {
                    if (a[i] < a[j]) {
                        d = a[i];
                        a[i] = a[j];
                        a[j] = d;
                    }
                    if (b[i] < b[j]) {
                        d = b[i];
                        b[i] = b[j];
                        b[j] = d;
                    }
                }
            }
            for (i = k = 0, j = t = c - 1; i <= j;) {
                if (a[i] > b[k]) {
                    x++;
                    i++;
                    k++;
                }
                else if (a[i] < b[k]) {
                    y++;
                    j--;
                    k++;
                }
                else if (a[j] > b[t]) {
                    x++;
                    j--;
                    t--;
                }
                else if (a[j] < b[t]) {
                    y++;
                    j--;
                    k++;
                }
                else {
                    if (a[j] < b[k]) {
                        y++;
                        j--;
                        k++;
                    }
                    else
                        break;
                }
            }
            m[n] = 200 * (x - y);
            n++;
            x = y = 0;
        }
    }
    for (i = 0; i < n; i++)
        printf ("%d\n", m[i]);
}

