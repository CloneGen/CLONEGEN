int main () {
    int i, num, b1, b2, pd, b0 [100];
    char a [100], e, b3;
    scanf ("%d\n", &num);
    for (i = 0; i < num; i++) {
        b1 = 0;
        pd = 0;
        while ((b3 = getchar ()) != '\n') {
            a[b1] = b3;
            b1++;
        }
        a[b1 + 1] = '\0';
        if (a[0] == '\0' || a[0] == '\n') {
            pd = 0;
        }
        if (a[0] == 95 || (a[0] >= 65 && a[0] <= 90) || (a[0] >= 97 && a[0] <= 122)) {
            pd = 1;
        }
        else {
            pd = 0;
        }
        for (b2 = 1; b2 < b1; b2++) {
            if (a[b2] < 48 || a[b2] > 122) {
                pd = 0;
                break;
            }
            if (a[b2] > 57 && a[b2] < 65) {
                pd = 0;
                break;
            }
            if (a[b2] > 90 && a[b2] < 95) {
                pd = 0;
                break;
            }
            if (a[b2] > 95 && a[b2] < 97) {
                pd = 0;
                break;
            }
            if (a[b2] > 122) {
                pd = 0;
                break;
            }
        }
        b0[i] = pd;
        for (b2 = 0; b2 < b1; b2++) {
            a[b2] = '\0';
        }
    }
    for (i = 0; i < num; i++) {
        e = b0[i];
        printf ("%d\n", e);
    }
    return 0;
}

