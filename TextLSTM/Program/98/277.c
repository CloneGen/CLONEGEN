int main () {
    int i, j;
    int n;
    int l;
    int num;
    char a [50];
    char s [160];
    scanf ("%d", &n);
    for (i = 0; i <= n; i++) {
        scanf ("%s", a);
        l = strlen (a);
        if ((num + l >= 80) || (n == i)) {
            printf ("%s\n", s);
            num = 0;
        }
        else if (num > 0) {
            *(s + num) = ' ';
            num++;
        }
        for (j = 0; j < l; j++) {
            *(s + num + j) = *(a + j);
        }
        *(s + num + l) = '\0';
        num += l;
    }
    return 0;
}

