int main () {
    int s [10], c [10], i, j, n, k;
    float sum, g [10], ave;
    i = 0;
    j = 0;
    k = 0;
    sum = 0;
    scanf ("%d", &n);
    while (i < n) {
        scanf ("%d", &c[i]);
        i++;
    }
    while (j < n) {
        scanf ("%d", &s[j]);
        j++;
    }
    i = 0;
    while (i < n) {
        k += c[i];
        i++;
    }
    j = 0;
    while (j < n) {
        if (s[j] >= 90)
            g[j] = 4.0;
        if (s[j] >= 85 && s[j] <= 89)
            g[j] = 3.7;
        if (s[j] >= 82 && s[j] <= 84)
            g[j] = 3.3;
        if (s[j] >= 78 && s[j] <= 81)
            g[j] = 3.0;
        if (s[j] >= 75 && s[j] <= 77)
            g[j] = 2.7;
        if (s[j] >= 72 && s[j] <= 74)
            g[j] = 2.3;
        if (s[j] >= 68 && s[j] <= 71)
            g[j] = 2.0;
        if (s[j] >= 64 && s[j] <= 67)
            g[j] = 1.5;
        if (s[j] >= 60 && s[j] <= 63)
            g[j] = 1.0;
        if (s[j] <= 60)
            g[j] = 0;
        j++;
    }
    j = 0;
    i = 0;
    while (j < n) {
        sum += g[j] * c[i];
        i++;
        j++;
    }
    ave = sum / k;
    printf ("%.2f", ave);
    return 0;
}

