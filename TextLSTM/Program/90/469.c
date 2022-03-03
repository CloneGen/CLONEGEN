int q (int M, int N) {
    int K, y, w;
    if (N == 1) {
        return 1;
    }
    if (M < 0) {
        return 0;
    }
    else {
    }
    return (q (M, N -1) + q (M -N, N));
}

main () {
    int t, i, M, N, b, K;
    scanf ("%d", &t);
    for (i = 0; i < t; i++) {
        scanf ("%d %d", &M, &N);
        b = q (M, N);
        printf ("%d\n", b);
    }
    getchar ();
    getchar ();
    getchar ();
}

