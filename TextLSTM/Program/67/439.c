int main () {
    int a [N] [2], n, i, x, y;
    float b [N] [2], z;
    scanf ("%d%d%d", &n, &x, &y);
    z = (float) y / (float) x;
    for (i = 0; i < n - 1; i++) {
        scanf ("%d%d", &a[i][0], &a[i][1]);
    }
    for (i = 0; i < n - 1; i++) {
        b[i][0] = ((float) a[i][1] / (float) a[i][0]);
        b[i][1] = b[i][0] - z;
        if (b[i][1] > 0.05)
            printf ("better\n");
        else if (b[i][1] < -0.05)
            printf ("worse\n");
        else
            printf ("same\n");
    }
    return 0;
}

