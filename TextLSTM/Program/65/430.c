int main () {
    int n, sz [200] [2], i, j, a = 0, b = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 2; j++) {
            scanf ("%d", &sz[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        if (sz[i][0] == 0 && sz[i][1] == 1) {
            a++;
        }
        if (sz[i][0] == 1 && sz[i][1] == 2) {
            a++;
        }
        if (sz[i][0] == 0 && sz[i][1] == 2) {
            b++;
        }
        if (sz[i][0] == 1 && sz[i][1] == 0) {
            b++;
        }
        if (sz[i][0] == 2 && sz[i][1] == 0) {
            a++;
        }
        if (sz[i][0] == 2 && sz[i][1] == 1) {
            b++;
        }
    }
    if (a == b) {
        printf ("Tie");
    }
    if (a > b) {
        printf ("A");
    }
    if (a < b) {
        printf ("B");
    }
    return 0;
}

