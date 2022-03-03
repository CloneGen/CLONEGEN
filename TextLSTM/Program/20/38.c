int main () {
    char a [100] [100], b [100] [100];
    int n = 0;
    while (scanf ("%s%s", a[n], b[n]) != EOF) {
        n++;
    }
    int i, j, k, mark;
    char c = '\0';
    for (i = 0; i < n; i++) {
        c = '\0';
        for (j = 0; a[i][j] != '\0'; j++) {
            if (a[i][j] > c) {
                c = a[i][j];
                mark = j;
            }
        }
        for (k = 0; k <= mark; k++) {
            printf ("%c", a[i][k]);
        }
        printf ("%s", b[i]);
        for (k = mark + 1; a[i][k] != '\0'; k++) {
            printf ("%c", a[i][k]);
        }
        printf ("\n");
    }
}

