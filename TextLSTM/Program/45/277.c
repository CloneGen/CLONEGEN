int main () {
    char s [100], a [100], b [100];
    int i, j, l, m, e = 0;
    char *str;
    memset (s, 0, 100);
    memset (a, 0, 100);
    scanf ("%s", a);
    gets (s);
    l = strlen (a);
    m = strlen (s);
    str = s;
    for (i = 0; i <= m - l; i++) {
        e = 0;
        for (j = 0; j < l; j++) {
            if (s[i + j] != a[j]) {
                e++;
                break;
            }
        }
        if (e == 0) {
            printf ("%d", i - 1);
            break;
        }
    }
    return 0;
}

