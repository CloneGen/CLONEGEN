void main () {
    char name [1000] [100];
    int fen [1000];
    int ban [1000];
    char gan [1000];
    char xi [1000];
    int lun [1000];
    int jiang [1000];
    int n, i, max, xue, sum;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s%d %d %c %c %d", name[i], &fen[i], &ban[i], &gan[i], &xi[i], &lun[i]);
        jiang[i] = 0;
        if (fen[i] > 80 && lun[i] >= 1)
            jiang[i] = 8000;
        if (fen[i] > 85 && ban[i] > 80)
            jiang[i] = jiang[i] + 4000;
        if (fen[i] > 90)
            jiang[i] = jiang[i] + 2000;
        if (fen[i] > 85 && xi[i] == 'Y')
            jiang[i] = jiang[i] + 1000;
        if (ban[i] > 80 && gan[i] == 'Y')
            jiang[i] = jiang[i] + 850;
    }
    max = jiang[0];
    xue = 0;
    for (i = 0; i < n; i++) {
        if (jiang[i] > max) {
            max = jiang[i];
            xue = i;
        }
    }
    sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + jiang[i];
    }
    printf ("%s\n", name[xue]);
    printf ("%d\n", jiang[xue]);
    printf ("%d\n", sum);
}

