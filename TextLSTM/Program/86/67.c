int main () {
    int n, k;
    scanf ("%d", &n);
    for (k = 0; k < n; k++) {
        int j, count = 0, time = 0, duan;
        int sz [30];
        scanf ("%d", &duan);
        for (j = 0; j < duan; j++) {
            scanf ("%d", &sz[j]);
        }
        if (duan == 0) {
            printf ("60\n");
        }
        else if (duan == 1) {
            if (sz[0] > 57) {
                printf ("%d\n", sz[0]);
            }
            else {
                printf ("57\n");
            }
        }
        else {
            count = sz[duan - 3];
            time = count + 3 * (duan - 3);
            time = time + 3;
            if (sz[duan - 2] + (duan - 2) * 3 < 60) {
                count = sz[duan - 2];
                time = count + (duan - 1) * 3;
                if (sz[duan - 1] + (duan - 1) * 3 < 60) {
                    count = sz[duan - 1];
                    time = count + (duan) *3;
                    while (time < 60) {
                        count++;
                        time++;
                    }
                }
                else {
                    while (time < 60) {
                        count++;
                        time++;
                    }
                }
            }
            else {
                while (time < 60) {
                    count++;
                    time++;
                }
            }
            printf ("%d\n", count);
        }
    }
    return 0;
}

