int main (void) {
    int glen;
    cin >> glen;
    char ar [505];
    cin >> ar;
    int slen;
    slen = strlen (ar);
    struct  substr {
        int position;
    }
    maxstr [100];
    int maxnum = 1, cmppo = 0, crtpo = 0, maxtype = 0, strnum = 0;
    while (cmppo <= slen - glen) {
        strnum = 0;
        crtpo = cmppo;
        while (crtpo <= slen - glen) {
            for (int i = 0;
            i < glen; i++) {
                if (!(ar[crtpo + i] == ar[cmppo + i]))
                    break;
                if (i == glen - 1) {
                    strnum++;
                }
            }
            crtpo++;
        }
        if (strnum > maxnum) {
            maxtype = 1;
            maxstr[maxtype].position = cmppo;
            maxnum = strnum;
        }
        else if (strnum == maxnum) {
            maxtype++;
            maxstr[maxtype].position = cmppo;
        }
        cmppo++;
    }
    if (maxnum == 1) {
        cout << "NO" << endl;
    }
    else {
        cout << maxnum << endl;
        for (int j = 1;
        j <= maxtype; j++) {
            for (int i = 0;
            i < glen; i++)
                cout << ar[maxstr[j].position + i];
            cout << endl;
        }
    }
    return 0;
}

