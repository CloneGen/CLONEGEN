int main () {
    int a [M], len [M], n, i, j, max, longest;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    longest = 1;
    for (i = 0; i < n; i++) {
        max = 1;
        len[i] = 1;
        for (j = 0; j < i; j++) {
            if (a[i] <= a[j])
                max = len[j] + 1;
            if (len[i] < max)
                len[i] = max;
        }
        if (len[i] > longest)
            longest = len[i];
    }
    printf ("%d\n", longest);
    return 0;
}

