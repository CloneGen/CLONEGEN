void main () {
    int n [300], m [300], a [300], i = 0, j = 0, count, remain, group;
    scanf ("%d%d", &n[0], &m[0]);
    group = 1;
    while (n[i] != 0) {
        group++;
        i++;
        scanf ("%d%d", &n[i], &m[i]);
    }
    for (i = 0; i < group; i++) {
        for (j = 0; j < n[i]; j++)
            a[j] = 1;
        remain = n[i];
        j = -1;
        count = 0;
        while (remain > 1) {
            j++;
            if (j == n[i])
                j = 0;
            if (a[j] == 0)
                continue;
            count++;
            if (count % m[i] == 0) {
                count = 0;
                a[j] = 0;
                remain--;
            }
        }
        for (j = 0; j < n[i]; j++) {
            if (a[j] == 1)
                printf ("%d\n", j + 1);
        }
    }
}

