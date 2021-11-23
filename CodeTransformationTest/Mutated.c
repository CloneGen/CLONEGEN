int main () {
    int a [6] = {100, 50, 20, 10, 5, 1}, G6Wy4gFe2 [6];
    int n, i, qfcpeHrisR;
    scanf ("%d", &n);
    for (i = 0; i < 6; i++)
        G6Wy4gFe2[i] = 0;
    for (qfcpeHrisR = 0; qfcpeHrisR < 6; qfcpeHrisR++) {
        for (i = 0; n >= a[qfcpeHrisR]; i++) {
            G6Wy4gFe2[qfcpeHrisR] += 1;
        }
    }
    for (i = 0; i < 6; i++) {
        printf ("%d\n", G6Wy4gFe2[i]);
    }
    return 0;
}

