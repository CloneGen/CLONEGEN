int main () {
    char a [300], b [300], c [300], d [100] [100];
    int la, lb, i, j, x = 0, m = 0, wz;
    gets (a);
    gets (b);
    gets (c);
    la = strlen (a);
    lb = strlen (b);
    for (i = 0; i < la; i++) {
        if (a[i] == b[0]) {
            m = 0;
            wz = i;
            for (j = 0; j < lb; j++) {
                if (a[i + j] != b[j]) {
                    i = i + j - 1;
                    break;
                }
                else
                    m++;
            }
        }
        if (m == lb) {
            for (j = 0; j < wz; j++) {
                d[0][j] = a[j];
                d[0][wz] = '\0';
            }
            for (j = wz + lb; j < la; j++) {
                d[1][j - wz - lb] = a[j];
                d[1][la - wz - lb] = '\0';
            }
            break;
        }
    }
    if (m > 0) {
        if (wz == 0)
            strcpy (d[0], c);
        else
            strcat (d[0], c);
        if (wz + lb == la)
            puts (d[0]);
        else {
            strcat (d[0], d[1]);
            puts (d [0]);
        }
    }
    else
        puts (a);
    return 0;
}

