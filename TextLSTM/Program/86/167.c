int main () {
    int n, i, j;
    int m, a, a0, time, result, k;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &m);
        time = 0;
        a0 = 0;
        for (j = 1; j <= m; j++) {
            scanf ("%d", &a);
            time = time + (a - a0) + 3;
            if (time >= 60) {
                for (k = j + 1; k <= m; k++)
                    scanf ("%d", &a);
                break;
            }
            a0 = a;
        }
        if (time < 60) {
            result = 60 - 3 * m;
        }
        else {
            if (time == 60) {
                result = 60 - j * 3;
            }
            else {
                if (time - 3 <= 60) {
                    result = time - 3 - (j - 1) * 3;
                }
                else
                    result = 60 - (j - 1) * 3;
            }
        }
        printf ("%d\n", result);
    }
    return 0;
}

