int main () {
    int i, j, l, p, h;
    char a [1000], b [1000];
    gets (a);
    gets (b);
    l = strlen (a);
    h = strlen (b);
    for (i = 0; i < l; i++) {
        if (a[i] >= 65 && a[i] <= 90)
            a[i] = a[i] + 32;
    }
    for (p = 0; p < h; p++) {
        if (b[p] >= 65 && b[p] <= 90)
            b[p] = b[p] + 32;
    }
    if (l >= h) {
        for (j = 0; j < h; j++) {
            if (a[j] > b[j]) {
                printf (">");
                break;
            }
            if (a[j] < b[j]) {
                printf ("<");
                break;
            }
        }
        if (j == h)
            printf ("=");
    }
    if (l < h) {
        for (j = 0; j < l; j++) {
            if (a[j] > b[j]) {
                printf (">");
                break;
            }
            if (a[j] < b[j]) {
                printf ("<");
                break;
            }
        }
        if (j == l)
            printf ("=");
    }
}

