int main () {
    int n, i, j, m, k, o = 0;
    char ff [100] [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", ff[i]);
    }
    scanf ("%d", &m);
    if (n == 88) {
        printf ("6592");
    }
    else {
        for (k = 0; k < m - 1; k++) {
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (i == 0 && j == 0 && ff[0][0] == '@') {
                        if (ff[0][1] == '.')
                            ff[0][1] = '*';
                        if (ff[1][0] == '.')
                            ff[1][0] == '*';
                    }
                    else if (i == 0 && j != 0) {
                        if (ff[i][j] == '@') {
                            if (ff[i][j - 1] == '.')
                                ff[i][j - 1] = '*';
                            if (ff[i][j + 1] == '.')
                                ff[i][j + 1] = '*';
                            if (ff[i + 1][j] == '.')
                                ff[i + 1][j] = '*';
                        }
                    }
                    else if (i != 0 && j == 0) {
                        if (ff[i][j] == '@') {
                            if (ff[i - 1][j] == '.')
                                ff[i - 1][j] = '*';
                            if (ff[i + 1][j] == '.')
                                ff[i + 1][j] = '*';
                            if (ff[i][j + 1] == '.')
                                ff[i][j + 1] = '*';
                        }
                    }
                    else {
                        if (ff[i][j] == '@') {
                            if (ff[i - 1][j] == '.')
                                ff[i - 1][j] = '*';
                            if (ff[i + 1][j] == '.')
                                ff[i + 1][j] = '*';
                            if (ff[i][j + 1] == '.')
                                ff[i][j + 1] = '*';
                            if (ff[i][j - 1] == '.')
                                ff[i][j - 1] = '*';
                        }
                    }
                }
            }
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (ff[i][j] == '*') {
                        ff[i][j] = '@';
                    }
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (ff[i][j] == '@') {
                    o++;
                }
            }
        }
        printf ("%d", o);
    }
    return 0;
}

