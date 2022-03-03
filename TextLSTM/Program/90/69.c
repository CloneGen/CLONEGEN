int placeMethodCounts (int m, int n) {
    if (m == 0 || n == 1)
        return 1;
    if (m >= n)
        return placeMethodCounts (m - n, n) + placeMethodCounts (m, n - 1);
    else
        return placeMethodCounts (m, m);
}

int main () {
    int t, i;
    int m [MAX_T], n [MAX_T];
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
        scanf ("%d %d", &m[i], &n[i]);
    for (i = 0; i < t; i++)
        printf ("%d\n", placeMethodCounts (m[i], n[i]));
    return 0;
}

