int main () {
    int n, a, b, i, k, h;
    k = 0;
    h = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d%d", &a, &b);
        if (a == b) {
            k = k;
            h = h;
        }
        if (a == 0 && b == 1) {
            k = k + 1;
        }
        if (a == 1 && b == 2) {
            k = k + 1;
        }
        if (a == 2 && b == 0) {
            k = k + 1;
        }
        if (a == 0 && b == 2) {
            h = h + 1;
        }
        if (a == 2 && b == 1) {
            h = h + 1;
        }
        if (a == 1 && b == 0) {
            h = h + 1;
        }
    }
    if (k > h) {
        printf ("A");
    }
    if (k < h) {
        printf ("B");
    }
    if (k == h) {
        printf ("Tie");
    }
    return 0;
}

