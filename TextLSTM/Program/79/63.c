int main () {
    int i, j, k, n, a [301], num, m, b [N], c [N], s, t;
    s = 0;
    for (t = 1; t < 10000; t++) {
        scanf ("%d%d", &(b[t]), &(c[t]));
        if (b[t] == 0 && c[t] == 0)
            break;
        s = s + 1;
    }
    for (t = 1; t <= s; t++) {
        j = 0, k = 0;
        for (i = 1; i <= b[t]; i++) {
            a[i] = 1;
        }
        for (i = 1; i <= b[t]; i++) {
            if (a[i] == 1) {
                j = j + a[i];
                if (j == c[t]) {
                    j = 0;
                    a[i] = 0;
                    k++;
                    if (k == b[t]) {
                        num = i;
                        break;
                    }
                }
            }
            if (i == b[t])
                i = 0;
        }
        printf ("%d\n", num);
    }
}

