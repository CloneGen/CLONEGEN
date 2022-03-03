int main () {
    char a [200] [50], *p;
    int length [200] = {0};
    int i, j, n, max = 0, min = 100, n1, n2;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i++) {
        for (j = 0;; j++) {
            scanf ("%c", *(a + i) + j);
            if (*(*(a + i) + j) == ' ' || *(*(a + i) + j) == '\n') {
                *(*(a + i) + j) = '\0';
                break;
            }
            else
                (*(length + i))++;
        }
    }
    for (i = 0; i < n; i++) {
        if ((*(length + i)) > max) {
            max = *(length + i);
            n1 = i;
        }
        if ((*(length + i)) < min) {
            min = *(length + i);
            n2 = i;
        }
    }
    printf ("%s\n%s", a + n1, a + n2);
    return 0;
}

