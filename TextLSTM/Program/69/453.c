int lenA, lenB, maxLen;

void change (char a [300], int len) {
    int q;
    for (int i = 0;
    i < len / 2; i++) {
        if (len - i - 1 == i)
            break;
        else {
            q = a[i];
            a[i] = a[len - i - 1];
            a[len - i - 1] = q;
        }
    }
}

int add (char c [300], char d [300], int x, char s [300]) {
    if (c[x] - '0' + d[x] - '0' < 10) {
        s[x] = c[x] - '0' + d[x];
        if (x >= maxLen - 1)
            return 0;
    }
    else {
        s[x] = c[x] - '0' + d[x] - 10;
        c[x + 1]++;
        if (x >= maxLen - 1) {
            s[x + 1]++;
            maxLen++;
            return 0;
        }
    }
    return add (c, d, x + 1, s);
}

int main () {
    char a [300];
    char b [300];
    char c [300];
    int i, j;
    for (i = 0; i < 300; i++)
        a[i] = b[i] = c[i] = '0';
    cin >> a >> b;
    for (i = 0; a[i] != '\0' && a[i] == '0'; i++)
        ;
    lenA = strlen (a);
    for (j = 0; j < lenA - i; j++)
        a[j] = a[j + i];
    lenA -= i;
    for (i = 0; b[i] != '\0' && b[i] == '0'; i++)
        ;
    lenB = strlen (b);
    for (j = 0; j < lenB - i; j++)
        b[j] = b[j + i];
    lenB -= i;
    if (lenA == 0 && lenB == 0)
        cout << '0';
    else if (lenA == 0)
        cout << b;
    else if (lenB == 0)
        cout << a;
    else {
        maxLen = lenA > lenB ? lenA : lenB;
        a[lenA] = b[lenB] = '0';
        change (a, lenA);
        change (b, lenB);
        add (a, b, 0, c);
        for (i = maxLen - 1; i >= 0; i--) {
            cout << c[i];
        }
    }
}

