int main () {
    int n, i;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i++) {
        int p, h;
        char a [20];
        for (p = 0;; p++) {
            scanf ("%c", &a[p]);
            if (a[p] == '\n')
                break;
        }
        if (a[p - 1] == 'r') {
            if (a[p - 2] == 'e') {
                for (h = 0; h < p - 2; h++) {
                    printf ("%c", a[h]);
                }
                printf ("\n");
            }
            else {
                for (h = 0; h < p; h++) {
                    printf ("%c", a[h]);
                }
                printf ("\n");
            }
        }
        else if (a[p - 1] == 'y') {
            if (a[p - 2] == 'l') {
                for (h = 0; h < p - 2; h++) {
                    printf ("%c", a[h]);
                }
                printf ("\n");
            }
            else {
                for (h = 0; h < p; h++) {
                    printf ("%c", a[h]);
                }
                printf ("\n");
            }
        }
        else if (a[p - 1] == 'g') {
            if (a[p - 2] == 'n') {
                if (a[p - 3] == 'i') {
                    for (h = 0; h < p - 3; h++) {
                        printf ("%c", a[h]);
                    }
                    printf ("\n");
                }
                else {
                    for (h = 0; h < p; h++) {
                        printf ("%c", a[h]);
                    }
                    printf ("\n");
                }
            }
            else {
                for (h = 0; h < p; h++) {
                    printf ("%c", a[h]);
                }
                printf ("\n");
            }
        }
        else {
            for (h = 0; h < p; h++) {
                printf ("%c", a[h]);
            }
            printf ("\n");
        }
    }
    return 0;
}

