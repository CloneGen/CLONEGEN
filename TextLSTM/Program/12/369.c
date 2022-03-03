int main () {
    int a [20], bn [100] = {0, 0, 0}, i, j, k, t = 1, l;
    for (t = 1;; t++) {
        i = 1;
        do {
            scanf ("%d", &a[i - 1]);
            if (a[i - 1] == -1)
                break;
            i++;
        }
        while (a[i - 2] != 0);
        if (a[i - 1] == -1)
            break;
        for (j = 1; j <= i - 2; j++) {
            for (k = 1; k <= i - 2; k++)
                if (a[j - 1] == 2 * a[k - 1])
                    bn[t - 1]++;
        }
    }
    for (l = 1; l <= t - 1; l++)
        printf ("%d\n", bn[l - 1]);
    return 0;
}

