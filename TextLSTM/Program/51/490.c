int main () {
    char c [505] = {0}, str [505] [6] = {'\0'};
    int n, len, i, j, k, v, f [505] = {0}, count = 0;
    scanf ("%d", &n);
    getchar ();
    gets (c);
    for (len = 0; c[len] != '\0'; len++)
        ;
    for (i = 0; c[i + n - 1] != '\0'; i++) {
        for (j = 0; j < n; j++) {
            str[i][j] = c[i + j];
        }
    }
    for (i = 0; c[i + n - 1] != '\0'; i++) {
        for (j = i + 1; c[j + n - 1] != '\0'; j++) {
            v = 1;
            for (k = 0; k < n; k++) {
                if (str[i][k] != str[j][k]) {
                    v = 0;
                }
            }
            if (v == 1) {
                f[i] = f[i] + 1;
            }
        }
    }
    int max = f[0];
    for (i = 0; c[i + n - 1] != '\0'; i++) {
        if (f[i] > max)
            max = f[i];
    }
    for (i = 0; c[i + n - 1] != '\0'; i++) {
        if (f[i] == max) {
            for (j = i; c[j + n - 1] != '\0'; j++) {
                v = 1;
                for (k = 0; k < n; k++) {
                    if (str[i][k] != str[j][k]) {
                        v = 0;
                    }
                }
                if (v == 1) {
                    count = count + 1;
                }
            }
            break;
        }
    }
    if (count <= 1) {
        printf ("NO\n");
        return 0;
    }
    printf ("%d\n", count);
    for (i = 0; c[i + n - 1] != '\0'; i++) {
        if (f[i] == max) {
            printf ("%s\n", str[i]);
        }
    }
    return 0;
}

