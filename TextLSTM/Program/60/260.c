int main () {
    int n;
    int i, j, sign;
    scanf ("%d", &n);
    int judge;
    if ((n == 1) || (n == 2) || (n == 3)) {
        printf ("empty\n");
    }
    else {
        judge = 0;
        for (i = 3; i <= n; i++) {
            sign = 1;
            for (j = 2; j < i; j++) {
                if (((i + 2) % j == 0) || (i % j == 0)) {
                    sign = 0;
                    break;
                }
                else
                    continue;
            }
            if ((sign == 1) && ((i + 2) <= n)) {
                judge = 1;
                printf ("%d %d\n", i, i + 2);
            }
        }
        if (judge == 0) {
            printf ("empty");
        }
    }
    return 0;
}

