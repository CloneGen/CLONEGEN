int main (int argc, char *argv []) {
    int i, j, n, s, max, l, k, r, t;
    char str [501], x, y, z;
    scanf ("%d", &n);
    scanf ("%s", str);
    l = strlen (str);
    max = 0;
    for (i = 0; i < l - n + 1; i++) {
        s = 0;
        for (j = i + 1; j < l - n + 1; j++) {
            t = 0;
            for (r = 0; r < n; r++) {
                if (str[i + r] == str[j + r])
                    t++;
            }
            if (t == n) {
                s++;
            }
        }
        if (s > max) {
            max = s;
        }
    }
    if (max == 0) {
        printf ("NO");
        return 0;
    }
    else {
        printf ("%d\n", max + 1);
        for (i = 0; i < l - n + 1; i++) {
            s = 0;
            x = str[i];
            y = str[i + 1];
            z = str[i + 2];
            for (j = i + 1; j < l - n + 1; j++) {
                t = 0;
                for (r = 0; r < n; r++) {
                    if (str[i + r] == str[j + r])
                        t++;
                }
                if (t == n) {
                    s++;
                }
            }
            if (s == max) {
                for (r = 0; r < n; r++) {
                    printf ("%c", str[i + r]);
                }
                printf ("\n");
            }
        }
        return 0;
    }
}

