int e (int n) {
    if (n == 0)
        return 1;
    else
        return 10 * e (n - 1);
}

int main () {
    int N;
    int a [4];
    int i = 0;
    int t = 0;
    int n = 0;
    scanf ("%d", &N);
    if (N != 0) {
        while (N % (1 * e (i)) != N) {
            a[i] = (N % (1 * e (i + 1)) - N % (1 * e (i))) / (1 * e (i));
            i++;
        }
        while (t <= i - 1) {
            printf ("%d", a[t]);
            t++;
        }
    }
    else
        printf ("0\n");
    return 0;
}

