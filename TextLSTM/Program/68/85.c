void main () {
    int a [9000];
    int i, N, n, t, k, o = 3, s;
    scanf ("%ld", &N);
    for (i = 0, t = 3; t <= N; t = t + 2) {
        o = 2;
        k = (int) sqrt (t);
        while (o <= k) {
            if (t % o == 0) {
                o = 0;
                break;
            }
            else
                o++;
        }
        if (o != 0) {
            a[i] = t;
            i++;
        }
        else
            continue;
    }
    o = i - 1;
    k = 6;
    while (k <= N) {
        n = o;
        for (i = 0; i <= o;) {
            t = k - a[i];
            while (n >= 0 && a[n] >= t) {
                if (a[n] == t) {
                    printf ("%ld=%ld+%ld\n", k, a[i], a[n]);
                    i = 1000001;
                    n = -1;
                }
                else
                    n--;
            }
            i++;
        }
        k = k + 2;
    }
}

