int main () {
    int a [4], i, j, k, Z, Q, S, L;
    char b [4] = {'z', 'q', 's', 'l'}, y;
    for (a[0] = 10; a[0] <= 50; a[0] += 10) {
        for (a[1] = 10; a[1] <= 50; a[1] += 10) {
            for (a[2] = 10; a[2] <= 50; a[2] += 10) {
                a[3] = a[0] + a[1] - a[2];
                if ((a[3] >= 10) && (a[3] <= 50) && ((a[0] + a[3]) > (a[1] + a[2])) && ((a[0] + a[2]) < a[1])) {
                    Z = a[0];
                    Q = a[1];
                    S = a[2];
                    L = a[3];
                    break;
                    break;
                    break;
                }
            }
        }
    }
    a[0] = Z;
    a[1] = Q;
    a[2] = S;
    a[3] = L;
    for (i = 2; i >= 0; i--)
        for (j = 0; j <= i; j++) {
            if (a[i] > a[i + 1]) {
                k = a[i];
                a[i] = a[i + 1];
                a[i + 1] = k;
                y = b[i];
                b[i] = b[i + 1];
                b[i + 1] = y;
            }
        }
    for (i = 3; i >= 0; i--) {
        printf ("%c %d\n", b[i], a[i]);
    }
    return 0;
}

