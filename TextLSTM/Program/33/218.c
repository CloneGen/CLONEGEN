int main () {
    int n, i, j;
    char a [N] [M];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", a[i]);
        for (j = 0; a[i][j]; j++) {
            if (a[i][j] == 'A') {
                a[i][j] = 'T';
            }
            else if (a[i][j] == 'T') {
                a[i][j] = 'A';
            }
            else if (a[i][j] == 'C') {
                a[i][j] = 'G';
            }
            else if (a[i][j] == 'G') {
                a[i][j] = 'C';
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", a[i]);
    }
    return 0;
}

