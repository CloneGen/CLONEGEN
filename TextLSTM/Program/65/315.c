int main () {
    int n, i, q, a, b;
    a = 0;
    b = 0;
    scanf ("%d", &n);
    int sz [n] [2];
    for (i = 0; i < n; i++) {
        for (q = 0; q < 2; q++) {
            scanf ("%d", &sz[i][q]);
        }
    }
    for (i = 0; i < n; i++) {
        if (sz[i][0] == 0 && sz[i][1] == 1) {
            a = a + 1;
            b = b;
        }
        else {
            if (sz[i][0] == 1 && sz[i][1] == 2) {
                a = a + 1;
                b = b;
            }
            else {
                if (sz[i][0] == 2 && sz[i][1] == 0) {
                    a = a + 1;
                    b = b;
                }
                else {
                    if (sz[i][0] == sz[i][1]) {
                        a = a;
                        b = b;
                    }
                    else {
                        a = a;
                        b = b + 1;
                    }
                }
            }
        }
    }
    if (a > b) {
        printf ("A");
    }
    else {
        if (a == b) {
            printf ("Tie");
        }
        else {
            printf ("B");
        }
    }
    return 0;
}

