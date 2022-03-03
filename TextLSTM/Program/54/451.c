int main () {
    int n, k, applesRemain;
    int count;
    double numDouble;
    int applesBefore;
    int mytry;
    scanf ("%d %d", &n, &k);
    count = 0;
    for (mytry = 1; count < n; mytry++) {
        applesRemain = mytry;
        for (; count < n; count++) {
            numDouble = (applesRemain + k - (double) k / n) * n / (double) (n - 1);
            applesBefore = (int) numDouble;
            if (numDouble - applesBefore > 0) {
                count = 0;
                break;
            }
            else {
                applesRemain = applesBefore;
            }
        }
    }
    printf ("%d\n", applesRemain);
    return 0;
}

