void main () {
    int i, j, k, u, p;
    char c;
    for (;;) {
        p = 1;
        char ch [102] = {'0'};
        i = 2;
        c = getchar ();
        if (c == -1)
            break;
        else
            ch[1] = c;
        while ((c = getchar ()) != '\n') {
            ch[i] = c;
            i++;
        }
        i--;
        for (j = 1; j <= i; j++)
            printf ("%c", ch[j]);
        printf ("\n");
        while (p == 1) {
            p = 0;
            for (j = 1; j <= i - 1; j++) {
                if (ch[j] == '(') {
                    for (k = j + 1; k <= i; k++) {
                        u = 1;
                        if (ch[k] == '(') {
                            break;
                        }
                        else {
                            if (ch[k] == ')') {
                                u = 0;
                                break;
                            }
                        }
                    }
                    if (u == 0) {
                        ch[j] = 0;
                        ch[k] = 0;
                        p = 1;
                    }
                }
            }
        }
        for (j = 1; j <= i; j++) {
            if (ch[j] == '(') {
                ch[j] = '$';
            }
            else {
                if (ch[j] == ')') {
                    ch[j] = '?';
                }
                else
                    ch[j] = ' ';
            }
        }
        for (j = 1; j <= i; j++)
            printf ("%c", ch[j]);
        printf ("\n");
    }
}

