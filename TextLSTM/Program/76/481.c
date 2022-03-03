int getMin (int ai [], int ais []) {
    int i, min = 0;
    for (i = 1; i < MAX &&ai[i] != -1; i++) {
        if (ai[i] < ai[min])
            min = i;
    }
    ais[min] = 0;
    return min;
}

int getMax (int bi []) {
    int i, max = 0;
    for (i = 1; i < MAX &&bi[i] != -1; i++) {
        if (bi[i] > bi[max])
            max = i;
    }
    return max;
}

int hasEqual (int a, int ai [], int ais []) {
    int i;
    for (i = 0; i < MAX; i++) {
        if (ai[i] <= a && ais[i] == 1) {
            ais[i] = 0;
            return i;
        }
    }
    return -1;
}

int main () {
    int ai [MAX], bi [MAX];
    int aischeck [MAX];
    int n = 0, i, temp;
    for (i = 0; i < MAX; i++) {
        ai[i] = -1;
        bi[i] = -1;
        aischeck[i] = 1;
    }
    int mi, ma, min, max;
    scanf ("%d", &n);
    while (n > MAX) {
        scanf ("%d", &n);
    }
    for (i = 0; i < n; i++) {
        scanf ("%d%d", &ai[i], &bi[i]);
        while (ai[i] > bi[i]) {
            scanf ("%d%d", &ai[i], &bi[i]);
        }
    }
    mi = min = getMin (ai, aischeck);
    ma = max = getMax (bi);
    temp = hasEqual (bi[min], ai, aischeck);
    while (temp != -1) {
        temp = hasEqual (bi[temp], ai, aischeck);
        if (bi[temp] == bi[ma]) {
            printf ("\n%d %d", ai[mi], bi[ma]);
            return 0;
        }
    }
    printf ("no\n");
}

