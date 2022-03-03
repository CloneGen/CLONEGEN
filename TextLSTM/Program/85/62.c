int main () {
    int n, i, i1, k = 1;
    long len;
    scanf ("%d", &n);
    char s [500] [20];
    for (i = 0; i < n; i++) {
        scanf ("%s", s[i]);
        k = 1;
        if ((s[i][0] < 'A' || s[i][0] > 'Z') && (s[i][0] < 'a' || s[i][0] > 'z') && s[i][0] != '_') {
            printf ("no\n");
            continue;
        }
        len = strlen (s[i]);
        for (i1 = 1; i1 < len; i1++) {
            if ((s[i][i1] < 'A' || s[i][i1] > 'Z') && (s[i][i1] < 'a' || s[i][i1] > 'z') && s[i][i1] != '_' && (s[i][i1] < '0' || s[i][i1] > '9')) {
                printf ("no\n");
                k = 0;
                break;
            }
        }
        if (k == 1) {
            printf ("yes\n");
        }
    }
}

