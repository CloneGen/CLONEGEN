main () {
    char b [1001];
    gets (b);
    int n, i;
    n = 1;
    for (i = 0; b[i] != '\0'; i++) {
        if ((b[i] >= 'a') && (b[i] <= 'z'))
            b[i] = b[i] + 'A' - 'a';
        else
            b[i] = b[i];
    }
    if (b[1] != b[0])
        printf ("(%c,%d)", b[0], n);
    for (i = 1; b[i] != '\0'; i++) {
        if (b[i] == b[i - 1]) {
            n = n + 1;
            if ((b[i] != b[i + 1]) || (b[i + 1] == '\0')) {
                printf ("(%c,%d)", b[i], n);
                n = 1;
            }
        }
        else {
            if ((b[i] != b[i + 1]) || (b[i + 1] == '\0'))
                printf ("(%c,%d)", b[i], n);
            else
                continue;
        }
    }
}

