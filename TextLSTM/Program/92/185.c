int n, a [1001], b [1001];

void sifta (int i, int num) {
    int j = i * 2, tmp = a[i];
    while (j <= num) {
        if (j < num && a[j] < a[j + 1])
            j++;
        if (tmp < a[j]) {
            a[i] = a[j];
            i = j;
            j = j * 2;
        }
        else
            break;
    }
    a[i] = tmp;
}

void siftb (int i, int num) {
    int j = i * 2, tmp = b[i];
    while (j <= num) {
        if (j < num && b[j] < b[j + 1])
            j++;
        if (tmp < b[j]) {
            b[i] = b[j];
            i = j;
            j = j * 2;
        }
        else
            break;
    }
    b[i] = tmp;
}

void hsa () {
    int i, tmp;
    for (i = n / 2; i > 0; i--)
        sifta (i, n);
    for (i = n; i > 0; i--) {
        tmp = a[i];
        a[i] = a[1];
        a[1] = tmp;
        sifta (1, i - 1);
    }
}

void hsb () {
    int i, tmp;
    for (i = n / 2; i > 0; i--)
        siftb (i, n);
    for (i = n; i > 0; i--) {
        tmp = b[i];
        b[i] = b[1];
        b[1] = tmp;
        siftb (1, i - 1);
    }
}

int main () {
    int i;
    while (1) {
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 1; i <= n; i++)
            scanf ("%d", &b[i]);
        for (i = 1; i <= n; i++)
            scanf ("%d", &a[i]);
        hsa ();
        hsb ();
        int tot = 0, j = 0, t = 0, visited [1001] = {0};
        int ha = 1, ta = n, hb = 1, tb = n;
        while (ha <= ta) {
            if (a[ha] < b[hb]) {
                tot += 200;
                ha++;
                hb++;
            }
            else if (a[ta] < b[tb]) {
                tot += 200;
                ta--;
                tb--;
            }
            else {
                if (a[ta] > b[hb])
                    tot -= 200;
                ta--;
                hb++;
            }
        }
        printf ("%d\n", tot);
    }
    return 0;
}

