int main () {
    char zfc [10000];
    int n, j = 0, i = 0, k = -1, len [10000];
    int max, min, sum = 0;
    gets (zfc);
    n = strlen (zfc);
    for (j = 0; j < n; j++) {
        len[j] = -1;
        for (i = k + 1; i < n; i++) {
            len[j]++;
            if (zfc[i] == 32) {
                break;
            }
            if (i == n - 1) {
                len[j]++;
            }
        }
        k = i;
        if (k == n) {
            break;
        }
    }
    j++;
    for (i = 0; i < j; i++) {
        for (k = 0; k < j; k++) {
            if (len[i] > len[k]) {
                break;
            }
            else {
                min = i;
            }
        }
        if (k == j) {
            break;
        }
    }
    for (i = 0; i < j; i++) {
        for (k = 0; k < j; k++) {
            if (len[i] < len[k]) {
                break;
            }
            else {
                max = i;
            }
        }
        if (k == j && len[i] >= len[k]) {
            break;
        }
    }
    if (max == 0) {
        for (i = 0; i < len[max]; i++) {
            printf ("%c", zfc[i]);
        }
    }
    else {
        for (i = 0; i < max; i++) {
            sum = sum + len[i] + 1;
        }
        for (i = sum; i < sum + len[max]; i++) {
            printf ("%c", zfc[i]);
        }
    }
    printf ("\n");
    sum = 0;
    if (min == 0) {
        for (i = 0; i < len[min]; i++) {
            printf ("%c", zfc[i]);
        }
    }
    else {
        for (i = 0; i < min; i++) {
            sum = sum + len[i] + 1;
        }
        for (i = sum; i < sum + len[min]; i++) {
            printf ("%c", zfc[i]);
        }
    }
    return 0;
}

