void main () {
    char c [1000], d [1000], e [1002], p [1000], q [1000];
    int i, length1, length2, length, mark = 0, sign = 0;
    gets (c);
    gets (d);
    length1 = strlen (c);
    length2 = strlen (d);
    for (i = 0; i < length1; i++)
        p[i] = c[length1 - 1 - i];
    for (i = 0; i < length2; i++)
        q[i] = d[length2 - 1 - i];
    for (i = length1; i < 999; i++)
        p[i] = '0';
    for (i = length2; i < 999; i++)
        q[i] = '0';
    if (length1 > length2)
        length = length1;
    else
        length = length2;
    for (i = 0; i < length + 1; i++) {
        if (i == 0) {
            if (p[i] - '0' + q[i] - '0' + mark == 0) {
                e[0] = '0';
                e[1] = '\0';
                printf ("0");
                break;
            }
        }
        if (i == length) {
            if (p[i] - '0' + q[i] - '0' + mark == 0) {
                e[i] = '\0';
                break;
            }
        }
        if (p[i] - '0' + q[i] - '0' + mark > 9) {
            e[i] = p[i] + q[i] + mark - '0' - 10;
            mark = 1;
        }
        else {
            e[i] = p[i] + q[i] + mark - '0';
            mark = 0;
        }
    }
    e[length + 1] = '\0';
    length = strlen (e);
    for (i = 0; i < length; i++) {
        if (e[length - 1 - i] == '0' && sign == 0)
            continue;
        else {
            sign = 1;
            printf ("%c", e[length - 1 - i]);
        }
    }
    printf ("\n");
}

