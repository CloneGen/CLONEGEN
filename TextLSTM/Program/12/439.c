int main () {
    int a [20], temp, n = 0, i = 1, j, k;
    do {
        do {
            scanf ("%d", &temp);
            a[i] = temp;
            i++;
        }
        while (temp != 0 && temp != -1);
        for (j = 1; j < i - 2; j++) {
            for (k = j + 1; k <= i - 2; k++) {
                if ((a[j] / a[k] == 2 && a[j] % a[k] == 0) || (a[k] / a[j] == 2 && a[k] % a[j] == 0)) {
                    n++;
                }
            }
        }
        if (temp != -1) {
            printf ("%d\n", n);
        }
        i = 1;
        n = 0;
    }
    while (temp != -1);
    return 0;
}

