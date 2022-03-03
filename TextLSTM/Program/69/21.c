char a [252], b [252];
int an [252], bn [252], rn [252];
char res [252], temp [252];
int lenA, lenB, len;

void change () {
    int i;
    for (i = 0; i < lenA; i++) {
        an[i] = a[lenA - i - 1] - '0';
    }
    for (i = 0; i < lenB; i++) {
        bn[i] = b[lenB - i - 1] - '0';
    }
    if (lenA > lenB) {
        len = lenA;
        for (i = lenB; i < lenA; i++)
            bn[i] = 0;
    }
    else if (lenB > lenA) {
        len = lenB;
        for (i = lenA; i < lenB; i++)
            an[i] = 0;
    }
    else
        len = lenB;
}

void addAB () {
    int i;
    for (i = 0; i < len; i++) {
        rn[i] += an[i] + bn[i];
        if (rn[i] > 9) {
            rn[i] = rn[i] - 10;
            rn[i + 1]++;
        }
    }
    if (rn[i] == 1)
        len++;
    for (i = 0; i < len; i++) {
        temp[i] = rn[len - i - 1] + '0';
    }
    int begin = 1;
    while (temp[begin] == 0) {
        begin++;
    }
    if (len == 1)
        begin = 0;
    if (temp[0] != '0')
        begin = 0;
    for (i = 0; i < len - begin; i++)
        res[i] = temp[i + begin];
}

int main () {
    cin.getline (a, 252);
    cin.getline (b, 252);
    lenA = strlen (a);
    lenB = strlen (b);
    memset (rn, 0, sizeof (rn));
    change ();
    addAB ();
    cout << res << endl;
    return 0;
}

