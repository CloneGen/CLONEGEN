void main () {
    char a [50] [81] = {0}, (*p) [81], *q;
    int max, min, count, b [50] = {0}, i, l, s;
    for (p = a, count = 0;; p++, count++) {
        scanf ("%s", p);
        if (getchar () == '\n')
            break;
    }
    count = count + 1;
    for (p = a, i = 0; p < a + count; p++, i++) {
        b[i] = strlen (p);
    }
    for (i = 0, max = b[0], min = b[0], l = 0, s = 0; i < count; i++) {
        if (max < b[i]) {
            max = b[i];
            l = i;
        }
        if (min > b[i]) {
            min = b[i];
            s = i;
        }
    }
    for (p = a; p < a + count; p++) {
        if (p == a + l) {
            puts (p);
            break;
        }
    }
    for (p = a; p < a + count; p++) {
        if (p == a + s) {
            puts (p);
            break;
        }
    }
}

