int main () {
    int n, num [300], i, count = 0, j;
    float sum = 0, ave, cha [300], max = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &num[i]);
        sum += num[i];
    }
    ave = sum / n;
    for (i = 0; i < n; i++) {
        cha[i] = fabs (num[i] - ave);
        if (cha[i] > max) {
            max = cha[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (cha[i] == max) {
            count++;
        }
    }
    if (count == 1) {
        for (i = 0; i < n; i++) {
            if (cha[i] == max) {
                printf ("%d", num[i]);
            }
        }
    }
    if (count == 2) {
        for (i = 0; i < n; i++) {
            if (cha[i] == max && num[i] < ave) {
                printf ("%d,", num[i]);
            }
            if (cha[i] == max && num[i] > ave) {
                printf ("%d", num[i]);
            }
        }
    }
    return 0;
}

