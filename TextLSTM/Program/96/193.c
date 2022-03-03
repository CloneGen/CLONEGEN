int main (void) {
    int i, j = 0, k = 0, n, t = 0, ok = 0;
    char str [MAX], output [MAX];
    gets (str);
    n = strlen (str);
    while ((k < n)) {
        t = t * 10 + (str[k] - '0');
        k++;
        if (t > 13) {
            ok = 1;
        }
        if (ok) {
            output[j] = ('0' + t / 13);
            t = t % 13;
            j++;
        }
    }
    output[j] = '\0';
    if (ok)
        puts (output);
    else
        printf ("0\n");
    printf ("%d", t);
    return 0;
}

