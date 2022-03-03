void output (int a [9] [9]) {
    int x, y;
    for (x = 0; x <= 8; x++) {
        for (y = 0; y <= 8; y++) {
            printf ("%d", a[x][y]);
            if (y != 8)
                printf (" ");
        }
        printf ("\n");
    }
}

int main () {
    int a [9] [9] = {0};
    int i, j, k;
    int addup [9] [9] = {0};
    int m, day;
    int x, y;
    scanf ("%d", &m);
    scanf ("%d", &day);
    a[4][4] = m;
    for (i = 1; i <= day; i++) {
        for (x = 0; x <= 8; x++) {
            for (y = 0; y <= 8; y++) {
                {
                    addup[x - 1][y - 1] += a[x][y];
                    addup[x - 1][y] += a[x][y];
                    addup[x - 1][y + 1] += a[x][y];
                    addup[x][y - 1] += a[x][y];
                    addup[x][y] += 2 * a[x][y];
                    addup[x][y + 1] += a[x][y];
                    addup[x + 1][y - 1] += a[x][y];
                    addup[x + 1][y] += a[x][y];
                    addup[x + 1][y + 1] += a[x][y];
                }
            }
        }
        for (x = 0; x <= 8; x++) {
            for (y = 0; y <= 8; y++) {
                a[x][y] = addup[x][y];
                addup[x][y] = 0;
            }
        }
    }
    output (a);
}

