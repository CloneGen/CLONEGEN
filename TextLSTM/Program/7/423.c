int main () {
    char s1 [257 * 2], a [257], b [257];
    scanf ("%s", s1);
    scanf ("%s", a);
    scanf ("%s", b);
    int i, j, k, st, end;
    st = 0;
    end = 0;
    for (i = 0; s1[i] != 0; i++) {
        if (s1[i] == a[0]) {
            for (k = i + 1, j = 1; s1[k] != 0 && a[j] != 0; k++, j++) {
                if (s1[k] != a[j])
                    break;
            }
            if (a[j] == 0) {
                st = i;
                end = k;
                break;
            }
        }
    }
    if (st < end) {
        if (strlen (a) > strlen (b)) {
            for (i = st, j = 0; b[j] != 0; i++, j++) {
                s1[i] = b[j];
            }
            for (k = end; s1[k] != 0; k++, i++) {
                s1[i] = s1[k];
            }
            s1[i] = 0;
        }
        else {
            i = strlen (s1) + strlen (b) - strlen (a);
            for (k = strlen (s1); k >= end; k--, i--) {
                s1[i] = s1[k];
            }
            for (i = st, j = 0; b[j] != 0; i++, j++) {
                s1[i] = b[j];
            }
        }
    }
    printf ("%s", s1);
    return 0;
}

