int main () {
    char c [31];
    int i, j, sum;
    gets (c);
    for (i = 30; i >= 1; i--) {
        c[i] = c[i - 1];
    }
    c[0] = '+';
    sum = 0;
    for (i = 1; i < 31; i++) {
        if ((c[i - 1] != '-') && (c[i] >= '0') && (c[i] <= '9')) {
            sum = sum + 1;
            for (j = i; (c[j] >= '0') && (c[j] <= '9'); j++) {
                printf ("%c", c[j]);
            }
            printf ("\n");
            i = j;
        }
    }
    return 0;
}

