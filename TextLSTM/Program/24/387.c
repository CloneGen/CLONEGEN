int main () {
    char a [50] [20], ch;
    int i = 0, j, b [50], max = 0, min = 20, maxi, mini;
    for (i = 0;; i++) {
        for (j = 0;; j++) {
            ch = getchar ();
            if (ch == ' ' || ch == '\n') {
                a[i][j] = '\0';
                b[i] = j;
                break;
            }
            a[i][j] = ch;
        }
        if (ch == '\n')
            break;
    }
    a[i][j] = '\0';
    for (i;
    i >= 0; i--) {
        if (b[i] >= max) {
            max = b[i];
            maxi = i;
        }
        if (b[i] <= min) {
            min = b[i];
            mini = i;
        }
    }
    printf ("%s\n%s", a[maxi], a[mini]);
}

