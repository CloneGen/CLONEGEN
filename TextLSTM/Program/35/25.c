int main () {
    int hang, lie, i, j, k, a [8] [8], l = 0, p;
    scanf ("%d,%d", &hang, &lie);
    for (i = 0; i < hang; i++) {
        for (j = 0; j < lie; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < hang; i++) {
        for (j = 0; j < lie; j++) {
            for (k = 0; k < lie; k++) {
                if (a[i][k] > a[i][j]) {
                    break;
                }
                if (k == lie - 1) {
                    for (p = 0; p < hang; p++) {
                        if (a[p][j] < a[i][j]) {
                            break;
                        }
                        if (p == hang - 1) {
                            printf ("%d+%d", i, j);
                            l++;
                        }
                    }
                }
            }
        }
    }
    if (l == 0) {
        printf ("No");
    }
    return 0;
}

