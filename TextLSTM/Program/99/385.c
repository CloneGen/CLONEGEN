int main () {
    unsigned int a [101], i, age1 = 0, age2 = 0, age3 = 0, age4 = 0;
    double p1, p2, p3, p4, n;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] >= 1 && a[i] <= 18) {
            age1++;
        }
        else if (a[i] > 18 && a[i] <= 35) {
            age2++;
        }
        else if (a[i] > 35 && a[i] <= 60) {
            age3++;
        }
        else {
            age4++;
        }
    }
    p1 = age1 / n;
    p2 = age2 / n;
    p3 = age3 / n;
    p4 = age4 / n;
    printf ("1-18: %.2f%%\n", p1 * 100);
    printf ("19-35: %.2f%%\n", p2 * 100);
    printf ("36-60: %.2f%%\n", p3 * 100);
    printf ("60??: %.2f%%\n", p4 * 100);
    return 0;
}

