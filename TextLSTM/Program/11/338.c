int main () {
    int y, m, d, i, j, k, sum = 0, a;
    scanf ("%d %d %d", &y, &m, &d);
    for (i = 1; i <= (m - 1); i++) {
        if (i == 1)
            sum = sum + 31;
        if (i == 3)
            sum = sum + 31;
        if (i == 5)
            sum = sum + 31;
        if (i == 7)
            sum = sum + 31;
        if (i == 8)
            sum = sum + 31;
        if (i == 10)
            sum = sum + 31;
        if (i == 12)
            sum = sum + 31;
        if (i == 4)
            sum = sum + 30;
        if (i == 6)
            sum = sum + 30;
        if (i == 9)
            sum = sum + 30;
        if (i == 11)
            sum = sum + 30;
        if (i == 2) {
            j = y % 4, k = y % 400, a = y % 100;
            if ((a != 0 && j == 0) || (k == 0))
                sum = sum + 29;
            else
                sum = sum + 28;
        }
    }
    sum = sum + d;
    printf ("%d\n", sum);
    getchar ();
    getchar ();
}

