int main () {
    char a [6] [10] = {0};
    int i, j, k;
    for (i = 0; i < 6; i++) {
        scanf ("%s", a[i]);
    }
    for (j = 0; j < 6; j++) {
        if (strcmp (a[j], "0") == 0 || strcmp (a[j], "-0") == 0) {
            printf ("0\n");
        }
        else {
            if (a[j][0] == '-') {
                printf ("-");
                for (i = 9; i > 0; i--) {
                    if (a[j][i] != '0' && a[j][i] != '\0') {
                        printf ("%c", a[j][i]);
                        break;
                    }
                }
                for (k = i - 1; k > 0; k--) {
                    printf ("%c", a[j][k]);
                }
                printf ("\n");
            }
            else {
                for (i = 9; i >= 0; i--) {
                    if (a[j][i] != '0' && a[j][i] != '\0') {
                        printf ("%c", a[j][i]);
                        break;
                    }
                }
                for (k = i - 1; k >= 0; k--) {
                    printf ("%c", a[j][k]);
                }
                printf ("\n");
            }
        }
    }
    return 0;
}

