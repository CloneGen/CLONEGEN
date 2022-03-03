int main () {
    int n, i, j, k, a [1001], b [1001], sum = 0, win, draw, t, as, ae, bs, be;
    for (k = 0;; k++) {
        sum = 0;
        win = 0;
        draw = 0;
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
            scanf ("%d", &a[i]);
        for (i = 0; i < n; i++)
            scanf ("%d", &b[i]);
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (a[i] < a[j]) {
                    t = a[j];
                    a[j] = a[i];
                    a[i] = t;
                }
                if (b[i] < b[j]) {
                    t = b[j];
                    b[j] = b[i];
                    b[i] = t;
                }
            }
        }
        as = 0;
        ae = n - 1;
        bs = 0;
        be = n - 1;
        while (as <= ae) {
            if (a[as] > b[bs]) {
                as++;
                bs++;
                win++;
            }
            else if (a[ae] > b[be]) {
                ae--;
                be--;
                win++;
            }
            else {
                if (a[ae] == b[bs]) {
                    ae--;
                    bs++;
                    draw++;
                }
                else {
                    ae--;
                    bs++;
                }
            }
        }
        sum = win * 200 - (n - win - draw) * 200;
        printf ("%d\n", sum);
    }
    return 0;
}

