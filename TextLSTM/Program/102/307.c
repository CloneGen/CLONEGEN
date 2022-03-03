int cmp (const  void *x, const  void *y) {
    return *(float*) x > *(float*) y ? 1 : -1;
}

int main () {
    int n, ptra = 0, ptrb = 0;
    float a [40], b [40];
    char s [10];
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> s;
        if (s[0] == 'm')
            cin >> a[ptra++];
        else
            cin >> b[ptrb++];
    }
    qsort (a, ptra, sizeof (float), cmp);
    qsort (b, ptrb, sizeof (float), cmp);
    for (int j = 0;
    j < ptra; j++) {
        printf ("%.2f ", a[j]);
    }
    for (int k = ptrb - 1;
    k > 0; k--) {
        printf ("%.2f ", b[k]);
    }
    printf ("%.2f", b[0]);
    return 0;
}

