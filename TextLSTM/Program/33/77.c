int main () {
    int n, i, j;
    char a [1000] [300], b [1000] [300];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", a[i]);
        strcpy (b[i], a[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; a[i][j] != '\0'; j++) {
            if (a[i][j] == 'A')
                b[i][j] = 'T';
            if (a[i][j] == 'T')
                b[i][j] = 'A';
            if (a[i][j] == 'C')
                b[i][j] = 'G';
            if (a[i][j] == 'G')
                b[i][j] = 'C';
        }
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", b[i]);
    }
    return 0;
}

