void main () {
    char a [200], b [200], c;
    int i = 0, r = 0, flag = 0;
    scanf ("%c", &c);
    while (c != '\n') {
        a[i] = c;
        i++;
        scanf ("%c", &c);
    }
    a[i] = '!';
    i = 0;
    while (a[i] != '!') {
        b[i] = (r * 10 + a[i] - '0') / 13 + '0';
        r = (r * 10 + a[i] - '0') % 13;
        i++;
    }
    b[i] = '!';
    i = 0;
    do {
        if (flag == 0) {
            if (b[i] >= '1' && b[i] <= '9') {
                printf ("%c", b[i]);
                flag = 1;
            }
        }
        else {
            printf ("%c", b[i]);
        }
        i++;
    }
    while (b[i] != '!');
    if (flag == 0) {
        printf ("0");
    }
    printf ("\n%d", r);
}

