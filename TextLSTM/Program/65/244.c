int main () {
    int n, i, cqa [200], cqb [200], a, b;
    a = 0;
    b = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d%d", &cqa[i], &cqb[i]);
    }
    for (i = 0; i < n; i++) {
        if (cqa[i] == cqb[i]) {
            a = a;
            b = b;
        }
        if (cqa[i] - 1 == cqb[i]) {
            a = a;
            b = b + 1;
        }
        if (cqa[i] + 1 == cqb[i]) {
            a = a + 1;
            b = b;
        }
        if (cqa[i] + 2 == cqb[i]) {
            a = a;
            b = b + 1;
        }
        if (cqa[i] - 2 == cqb[i]) {
            a = a + 1;
            b = b;
        }
    }
    if (a == b) {
        printf ("Tie");
    }
    if (a < b) {
        printf ("B");
    }
    if (a > b) {
        printf ("A");
    }
    return 0;
}

