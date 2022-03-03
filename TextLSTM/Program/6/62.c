int main () {
    int n = 0;
    int x = 0, y = 0;
    int total = 0;
    int Matrix [100] [100] = {{0}, {0}};
    scanf ("%d", &n);
    for (int k = 0;
    k < n; k++) {
        scanf ("%d %d", &x, &y);
        for (int i = 0;
        i < x; i++)
            for (int j = 0;
            j < y; j++) {
                scanf ("%d", &Matrix[i][j]);
                if (i == 0 || i == x - 1)
                    total += Matrix[i][j];
                else if (j == 0 || j == y - 1)
                    total += Matrix[i][j];
            }
        printf ("%d\n", total);
        total = 0;
    }
    return 0;
}

