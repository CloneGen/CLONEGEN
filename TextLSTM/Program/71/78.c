int main () {
    int n, i, j, a [200] [3], b [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, s, e;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            scanf ("%d", &a[i][j]);
        }
        if (a[i][1] > a[i][2]) {
            e = a[i][1];
            a[i][1] = a[i][2];
            a[i][2] = e;
        }
    }
    for (i = 0; i < n; i++) {
        s = 0;
        if (((a[i][0] % 4 == 0) && (a[i][0] % 100 != 0)) || (a[i][0] % 400 == 0)) {
            b[1] = 29;
            for (j = a[i][1]; j < a[i][2]; j++) {
                s = s + b[j - 1];
            }
            if (s % 7 == 0) {
                printf ("YES\n");
            }
            else
                printf ("NO\n");
        }
        else {
            b[1] = 28;
            for (j = a[i][1]; j < a[i][2]; j++) {
                s = s + b[j - 1];
            }
            if (s % 7 == 0) {
                printf ("YES\n");
            }
            else
                printf ("NO\n");
        }
    }
    return 0;
}

