void main () {
    char max [100], min [100], result [100];
    int n, i, a, b, j, k;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%s%s", max, min);
        a = strlen (max);
        b = strlen (min);
        k = 0;
        if (a == b) {
            for (j = (a - 1); j >= 0; j--) {
                max[j] = max[j] - k;
                if (max[j] >= min[j]) {
                    result[j] = max[j] - min[j] + 48;
                    k = 0;
                }
                else {
                    result[j] = max[j] - min[j] + 58;
                    k = 1;
                }
            }
        }
        else {
            min[a] = '\0';
            for (j = 1; j <= b; j++)
                min[a - j] = min[b - j];
            for (j = (a - b - 1); j >= 0; j--)
                min[j] = '0';
            for (j = (a - 1); j >= 0; j--) {
                max[j] = max[j] - k;
                if (max[j] >= min[j]) {
                    result[j] = max[j] - min[j] + 48;
                    k = 0;
                }
                else {
                    result[j] = max[j] - min[j] + 58;
                    k = 1;
                }
            }
        }
        for (j = 0; j < a; j++) {
            if (result[j] != '0') {
                for (k = j; k < a; k++)
                    printf ("%c", result[k]);
                printf ("\n");
            }
            break;
        }
    }
}

