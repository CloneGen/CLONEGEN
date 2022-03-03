int main () {
    int m, n;
    int in [320];
    int i;
    int num;
    int last;
    while (1 > 0) {
        scanf ("%d%d", &n, &m);
        if ((n == 0) || (m == 0))
            break;
        else {
            for (i = 1; i <= n; i++) {
                in[i] = i;
            }
            last = 1;
            num = n;
            while (num != 1) {
                last += m - 1;
                while (last > num) {
                    last = last - num;
                }
                num--;
                for (i = last; i <= n; i++) {
                    in[i] = in[i + 1];
                }
            }
            printf ("%d\n", in[1]);
        }
    }
    return 0;
}

