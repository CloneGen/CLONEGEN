int main () {
    int a [200], b [200], c, d = 0, e = 0, f, g;
    scanf ("%d", &c);
    for (f = 0; f < c; f++) {
        scanf ("%d%d", &a[f], &b[f]);
        if (a[f] == 0) {
            if (b[f] == 1) {
                d++;
            }
            if (b[f] == 2) {
                e++;
            }
        }
        if (a[f] == 1) {
            if (b[f] == 2) {
                d++;
            }
            if (b[f] == 0) {
                e++;
            }
        }
        if (a[f] == 2) {
            if (b[f] == 0) {
                d++;
            }
            if (b[f] == 1) {
                e++;
            }
        }
    }
    if (d > e) {
        printf ("A");
    }
    if (d == e) {
        printf ("Tie");
    }
    if (d < e) {
        printf ("B");
    }
    return 0;
}

