int main (int argc, char *argv []) {
    int x, y, i, j, k = 0, a [100], b [100];
    scanf ("%d%d", &x, &y);
    a[1] = x;
    b[1] = y;
    for (i = 1; a[i] > 1; i++) {
        if (a[i] % 2 == 0) {
            a[i + 1] = a[i] / 2;
        }
        else {
            a[i + 1] = (a[i] - 1) / 2;
        }
    }
    for (j = 1; b[j] > 1; j++) {
        if (b[j] % 2 == 0) {
            b[j + 1] = b[j] / 2;
        }
        else {
            b[j + 1] = (b[j] - 1) / 2;
        }
    }
    for (i = 1; a[i] >= 1; i++) {
        for (j = 1; b[j] >= 1; j++) {
            if (b[j] == a[i]) {
                printf ("%d", b[j]);
                k = 1;
                break;
            }
        }
        if (k == 1) {
            break;
        }
    }
    return 0;
}

