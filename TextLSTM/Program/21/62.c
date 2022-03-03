void main () {
    int ch1 [350], n, i, ch2 [350], j, k = 1, l, r;
    double max, sum = 0;
    scanf ("%d\n", &n);
    for (i = 0; i <= n - 2; i++) {
        scanf ("%d ", &ch1[i]);
        sum = sum + ch1[i];
    }
    scanf ("%d", &ch1[n - 1]);
    sum = sum + ch1[n - 1];
    float average = (float) (sum / n);
    max = fabs (ch1[0] - average);
    ch2[0] = 0;
    for (j = 0; j <= n - 1; j++) {
        if (fabs (ch1[j] - average) > max) {
            max = fabs (ch1[j] - average);
            ch2[0] = j;
        }
    }
    for (r = 0; r <= n - 1; r++) {
        if (max == fabs (ch1[r] - average) && r != ch2[0]) {
            ch2[k] = r;
            k++;
        }
    }
    for (l = 0; l < k - 1; l++)
        printf ("%d,", ch1[ch2[l]]);
    printf ("%d", ch1[ch2[k - 1]]);
}

