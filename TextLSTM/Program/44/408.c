void f (int x) {
    int i, j, a [5];
    a[0] = (int) fabs (x) % 10;
    a[1] = (int) fabs (x) % 100 / 10;
    a[2] = (int) fabs (x) % 1000 / 100;
    a[3] = (int) fabs (x) % 10000 / 1000;
    a[4] = (int) fabs (x) / 10000;
    if (x > 0) {
        if (a[0] != 0) {
            printf ("%d", a[0]);
            if (a[4] != 0) {
                printf ("%d%d%d%d", a[1], a[2], a[3], a[4]);
            }
            if (a[4] == 0) {
                if (a[3] != 0)
                    printf ("%d%d%d", a[1], a[2], a[3]);
                if (a[3] == 0) {
                    if (a[2] != 0)
                        printf ("%d%d", a[1], a[2]);
                    if (a[2] == 0) {
                        if (a[1] != 0)
                            printf ("%d", a[1]);
                    }
                }
            }
            printf ("\n");
        }
        if (a[0] == 0) {
            if (a[1] != 0) {
                printf ("%d", a[1]);
                if (a[4] != 0) {
                    printf ("%d%d%d", a[2], a[3], a[4]);
                }
                if (a[4] == 0) {
                    if (a[3] != 0)
                        printf ("%d%d", a[2], a[3]);
                    if (a[3] == 0) {
                        if (a[2] != 0)
                            printf ("%d", a[2]);
                    }
                }
                printf ("\n");
            }
            if (a[1] == 0) {
                if (a[2] != 0) {
                    printf ("%d", a[2]);
                    if (a[4] != 0) {
                        printf ("%d%d", a[3], a[4]);
                    }
                    if (a[4] == 0) {
                        if (a[3] != 0) {
                            printf ("%d", a[3]);
                        }
                    }
                    printf ("\n");
                }
                if (a[2] == 0) {
                    if (a[3] != 0) {
                        printf ("%d", a[3]);
                        if (a[4] != 0) {
                            printf ("%d", a[4]);
                        }
                        printf ("\n");
                    }
                    if (a[3] == 0) {
                        printf ("%d\n", a[4]);
                    }
                }
            }
        }
    }
    if (x == 0) {
        printf ("0\n");
    }
    if (x < 0) {
        if (a[0] != 0) {
            printf ("-%d", a[0]);
            if (a[4] != 0) {
                printf ("%d%d%d%d", a[1], a[2], a[3], a[4]);
            }
            if (a[4] == 0) {
                if (a[3] != 0)
                    printf ("%d%d%d", a[1], a[2], a[3]);
                if (a[3] == 0) {
                    if (a[2] != 0)
                        printf ("%d%d", a[1], a[2]);
                    if (a[2] == 0) {
                        if (a[1] != 0)
                            printf ("%d", a[1]);
                    }
                }
            }
            printf ("\n");
        }
        if (a[0] == 0) {
            if (a[1] != 0) {
                printf ("-%d", a[1]);
                if (a[4] != 0) {
                    printf ("%d%d%d", a[2], a[3], a[4]);
                }
                if (a[4] == 0) {
                    if (a[3] != 0)
                        printf ("%d%d", a[2], a[3]);
                    if (a[3] == 0) {
                        if (a[2] != 0)
                            printf ("%d", a[2]);
                    }
                }
                printf ("\n");
            }
            if (a[1] == 0) {
                if (a[2] != 0) {
                    printf ("-%d", a[2]);
                    if (a[4] != 0) {
                        printf ("%d%d", a[3], a[4]);
                    }
                    if (a[4] == 0) {
                        if (a[3] != 0) {
                            printf ("%d", a[3]);
                        }
                    }
                    printf ("\n");
                }
                if (a[2] == 0) {
                    if (a[3] != 0) {
                        printf ("-%d", a[3]);
                        if (a[4] != 0) {
                            printf ("%d", a[4]);
                        }
                        printf ("\n");
                    }
                    if (a[3] == 0) {
                        printf ("-%d\n", a[4]);
                    }
                }
            }
        }
    }
}

void main () {
    int b [6], n;
    for (n = 0; n < 6; n++)
        scanf ("%d", &b[n]);
    for (n = 0; n < 6; n++)
        f (b[n]);
}

