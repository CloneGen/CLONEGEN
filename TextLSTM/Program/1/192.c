int num;
void f (int n, int i);

main () {
    int i, j, k, n, order, top;
    for (scanf ("%d", &order); order >= 1; order--) {
        scanf ("%d", &n);
        num = 0;
        top = (int) sqrt (n);
        for (i = 1; i <= top; i++) {
            if (n % i == 0) {
                num++;
                f (n / i, i);
            }
        }
        printf ("%d\n", num);
    }
}

void f (int n, int btm) {
    if (btm == 1)
        return;
    int top, i;
    top = (int) sqrt (n);
    if (top >= btm) {
        for (i = btm; i <= top; i++) {
            if (n % i == 0) {
                num++;
                f (n / i, i);
            }
        }
    }
}

