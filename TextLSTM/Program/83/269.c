int main () {
    int n, i, x = 0;
    int sz [100], sa [100];
    double g = 0.0, G;
    double sb [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &sz[i]);
    }
    for (i = 0; i < n; i++) {
        scanf ("%d", &sa[i]);
    }
    for (i = 0; i < n; i++)
        if (sa[i] > 89) {
            sb[i] = 4.0;
        }
        else {
            if (sa[i] > 84) {
                sb[i] = 3.7;
            }
            else {
                if (sa[i] > 81) {
                    sb[i] = 3.3;
                }
                else {
                    if (sa[i] > 77) {
                        sb[i] = 3.0;
                    }
                    else {
                        if (sa[i] > 74) {
                            sb[i] = 2.7;
                        }
                        else {
                            if (sa[i] > 71) {
                                sb[i] = 2.3;
                            }
                            else {
                                if (sa[i] > 67) {
                                    sb[i] = 2.0;
                                }
                                else {
                                    if (sa[i] > 63) {
                                        sb[i] = 1.5;
                                    }
                                    else {
                                        if (sa[i] > 59) {
                                            sb[i] = 1.0;
                                        }
                                        else {
                                            sb[i] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    for (i = 0; i < n; i++) {
        g = g + (sz [i]) *(sb[i]);
        x = x + sz[i];
    }
    G = g / x;
    printf ("%.2lf", G);
    return 0;
}

