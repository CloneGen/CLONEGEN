int main () {
    char a [100], b [100], c;
    int p [100], k = 1, i, j = 1, n, m, d;
    gets (a);
    p[0] = 0;
    for (i = 0; (c = a[i]) != '\0'; i++) {
        if (c == ' ') {
            k = 0;
        }
        else if (k == 0) {
            p[j] = i;
            j++;
            k = 1;
        }
    }
    p[j] = i + 1;
    a[i] = ' ';
    for (d = 0; d < j; d++) {
        for (m = p[d]; m < p[d + 1]; m++) {
            b[i - p[d + 1] + 1 + m - p[d]] = a[m];
        }
    }
    b[i] = 0;
    puts (b);
    return 0;
}

