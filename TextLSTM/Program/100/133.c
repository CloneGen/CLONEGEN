int main () {
    char A [302];
    int i, n, k, j;
    scanf ("%s", &A);
    k = 0;
    j = 0;
    for (n = 'a'; n <= 'z'; n++) {
        k = 0;
        for (i = 0; A[i] != 0; i++) {
            if (A[i] == n)
                k++;
        }
        if (k != 0) {
            printf ("%c=%d\n", n, k);
            j++;
        }
    }
    if (j == 0)
        printf ("No\n");
    return 0;
}

