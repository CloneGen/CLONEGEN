main () {
    int n, i, j, k, a, b, x, y, T;
    int t [1000];
    int q [1000];
    int z [100];
    y = 0;
    x = 0;
    do {
        scanf ("%d", &n);
        if (n != 0) {
            i = 0;
            a = 0;
            do {
                scanf ("%d", &t[i]);
                i = i + 1;
            }
            while (i < n);
            i = 0;
            do {
                scanf ("%d", &q[i]);
                i = i + 1;
            }
            while (i < n);
            for (j = 0; j < n - 1; j++) {
                for (i = 0; i < n - 1 - j; i++) {
                    if (t[i] > t[i + 1]) {
                        k = t[i];
                        t[i] = t[i + 1];
                        t[i + 1] = k;
                    }
                }
            }
            for (j = 0; j < n - 1; j++) {
                for (i = 0; i < n - 1 - j; i++) {
                    if (q[i] > q[i + 1]) {
                        k = q[i];
                        q[i] = q[i + 1];
                        q[i + 1] = k;
                    }
                }
            }
            j = 0;
            a = 0;
            b = -20000;
            do {
                i = 0;
                do {
                    if (t[i] > q[i])
                        a = a + 1;
                    else if (t[i] == q[i])
                        a = a;
                    else
                        a = a - 1;
                    i = i + 1;
                }
                while (i < n);
                i = 0;
                T = t[0];
                do {
                    t[i] = t[i + 1];
                    i = i + 1;
                }
                while (i < n - 1);
                t[n - 1] = T;
                j = j + 1;
                if (a > b)
                    b = a;
                a = 0;
            }
            while (j < n - 1);
            z[x] = b * 200;
            y = y + 1;
            x = x + 1;
        }
    }
    while (n != 0);
    x = 0;
    do {
        printf ("%d\n", z[x]);
        x = x + 1;
    }
    while (x < y);
}

