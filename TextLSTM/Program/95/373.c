void main () {
    char a [2] [86];
    int i, j, k = 0;
    for (i = 0; i < 2; i++)
        gets (a[i]);
    for (j = 0; j < 2; j++)
        for (i = 0; a[j][i] != 0; i++) {
            if (a[j][i] >= 'a' && a[j][i] <= 'z')
                a[j][i] = a[j][i] - 32;
        }
    for (i = 0;; i++) {
        if (a[0][i] == 0 || a[1][i] == 0) {
            if (a[0][i] == 0 && a[1][i] != 0) {
                k = -1;
                break;
            }
            else if (a[0][i] != 0 && a[1][i] == 0) {
                k = 1;
                break;
            }
            else {
                k = 0;
                break;
            }
        }
        else {
            if (a[0][i] > a[1][i]) {
                k = 1;
                break;
            }
            else {
                if (a[0][i] < a[1][i]) {
                    k = -1;
                    break;
                }
            }
        }
    }
    if (k == 1)
        printf (">");
    else if (k == 0)
        printf ("=");
    else
        printf ("<");
}

