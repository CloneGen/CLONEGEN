main () {
    for (int a = 1;
    a <= 5; a++)
        for (int b = 1;
        b <= 5; b++) {
            if (a == b)
                continue;
            for (int c = 1;
            c <= 5; c++) {
                if (c == b)
                    continue;
                if (c == a)
                    continue;
                for (int d = 1;
                d <= 5; d++) {
                    if (d == c)
                        continue;
                    if (d == a)
                        continue;
                    if (d == b)
                        continue;
                    for (int e = 1;
                    e <= 5; e++) {
                        if (e == 2)
                            continue;
                        if (e == 3)
                            continue;
                        if (e == a)
                            continue;
                        if (e == b)
                            continue;
                        if (e == c)
                            continue;
                        if (e == d)
                            continue;
                        if (a <= 2) {
                            if (e != 1)
                                continue;
                        }
                        else {
                            if (e == 1)
                                continue;
                        }
                        if (b <= 2) {
                            if (b != 2)
                                continue;
                        }
                        else {
                            if (b == 2)
                                continue;
                        }
                        if (c <= 2) {
                            if (a != 5)
                                continue;
                        }
                        else {
                            if (a == 5)
                                continue;
                        }
                        if (d <= 2) {
                            if (c == 1)
                                continue;
                        }
                        else {
                            if (c != 1)
                                continue;
                        }
                        if (e <= 2) {
                            if (d != 1)
                                continue;
                        }
                        else {
                            if (d == 1)
                                continue;
                        }
                        printf ("%d %d %d %d %d\n", a, b, c, d, e);
                    }
                }
            }
        }
    getchar ();
}

