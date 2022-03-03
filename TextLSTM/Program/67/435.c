int main () {
    int n, result [100];
    double ext;
    int i, j, temp1 = 0, temp2 = 0;
    double temp3;
    scanf ("%d", &n);
    scanf ("%d%d", &temp1, &temp2);
    ext = (double) temp2 / (double) temp1;
    for (i = 1; i <= n - 1; i++) {
        scanf ("%d%d", &temp1, &temp2);
        temp3 = (double) temp2 / (double) temp1;
        if ((temp3 - ext) > 0.05) {
            result[i] = 1;
        }
        else if ((ext - temp3) > 0.05) {
            result[i] = 2;
        }
        else {
            result[i] = 3;
        }
    }
    for (i = 1; i <= n - 1; i++) {
        if (result[i] == 1) {
            printf ("better\n");
        }
        if (result[i] == 2) {
            printf ("worse\n");
        }
        if (result[i] == 3) {
            printf ("same\n");
        }
    }
    return 0;
}

