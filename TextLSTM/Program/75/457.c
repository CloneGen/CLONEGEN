int main () {
    int timepoint [1000] = {0};
    int npeople = 0;
    char ch [10000] = {'\0'};
    int intime [1000] = {0}, outtime [1000] = {0};
    char intimech [1000] [1000], outtimech [1000] [1000];
    for (int i = 0;
    i <= 999; i++)
        for (int j = 0;
        j <= 999; j++) {
            intimech[i][j] = '\0';
            outtimech[i][j] = '\0';
        }
    cin.getline (ch, 10000);
    int i1 = 0, i2 = 0;
    for (int i = 0;
    i <= strlen (ch); i++) {
        if (ch[i] != ',') {
            intimech[i1][i2] = ch[i];
            i2++;
        }
        if (ch[i] == ',') {
            i1++;
            i2 = 0;
            npeople++;
        }
    }
    npeople = npeople + 1;
    for (int i = 0;
    i <= npeople - 1; i++) {
        intime[i] = atoi (intimech[i]);
    }
    memset (ch, '\0', 10000);
    cin.getline (ch, 10000);
    i1 = 0;
    i2 = 0;
    for (int i = 0;
    i <= strlen (ch); i++) {
        if (ch[i] != ',') {
            outtimech[i1][i2] = ch[i];
            i2++;
        }
        if (ch[i] == ',') {
            i1++;
            i2 = 0;
        }
    }
    for (int i = 0;
    i <= npeople - 1; i++) {
        outtime[i] = atoi (outtimech[i]);
    }
    for (int i = 0;
    i <= npeople - 1; i++) {
        for (int j = intime[i];
        j <= outtime[i] - 1; j++) {
            timepoint[j]++;
        }
    }
    int max = 0;
    for (int i = 0;
    i <= 999; i++) {
        if (timepoint[i] > max)
            max = timepoint[i];
    }
    cout << npeople << " " << max << endl;
    return 0;
}

