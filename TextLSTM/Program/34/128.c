int main () {
    int n, count = 0;
    scanf ("%d", &n);
    if (n == 1)
        printf ("End");
    else {
        do {
            if (n % 2) {
                n = n * 3 + 1;
                printf ("%d*3+1=%d\n", (n - 1) / 3, n);
            }
            else {
                n /= 2;
                printf ("%d/2=%d\n", 2 * n, n);
            }
        }
        while (n != 1);
        printf ("End");
    }
}

