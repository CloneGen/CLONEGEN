int main () {
    char child [110] = {'\0'};
    int ch [110] = {0}, dou [110] [2] = {0};
    int m = 0, i, count = 0, j = 0;
    while (cin >> child[m]) {
        if (cin.peek () == '\n')
            break;
        m++;
    }
    for (i = 0; i <= m; i++) {
        if (child[i] == child[0])
            ch[i] = 1;
        else
            ch[i] = 2;
    }
    int p;
    for (i = 0; i < m; i++) {
        if (ch[i] == 1 && ch[i + 1] == 2) {
            dou[j][0] = i;
            dou[j][1] = i + 1;
            j++;
            ch[i] = 0;
            ch[i + 1] = 0;
        }
    }
    int t;
    for (p = 0; p <= m / 2; p++) {
        for (i = 0; i < m; i++)
            for (t = 1; t < m - i + 1; t++) {
                if (ch[i] == 1) {
                    if (ch[i + t] == 0)
                        continue;
                    else if (ch[i + t] == 1)
                        break;
                    else {
                        dou[j][0] = i;
                        dou[j][1] = i + t;
                        j++;
                        ch[i] = 0;
                        ch[i + t] = 0;
                    }
                }
            }
        if (dou[m / 2][1] != 0)
            break;
    }
    for (j = 0; j <= m / 2; j++)
        for (i = 0; i <= m / 2 - j - 1; i++) {
            if (dou[i][1] > dou[i + 1][1]) {
                p = dou[i][0];
                dou[i][0] = dou[i + 1][0];
                dou[i + 1][0] = p;
                p = dou[i][1];
                dou[i][1] = dou[i + 1][1];
                dou[i + 1][1] = p;
            }
        }
    for (j = 0; j <= m / 2; j++)
        if (dou[j][1] != 0)
            cout << dou[j][0] << ' ' << dou[j][1] << endl;
    return 0;
}

