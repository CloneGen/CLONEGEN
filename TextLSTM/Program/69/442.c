void conv (int a [], char str []) {
    memset (a, 0, sizeof (int) * MAXN);
    int l = strlen (str);
    for (int i = l - 1;
    i >= 0; --i)
        a[l - 1 - i] = str[i] - '0';
}

void BigNumAdd (int a [], int b [], int c []) {
    memset (c, 0, sizeof (int) * MAXN);
    for (int i = 0;
    i < MAXN; i++) {
        c[i] += a[i] + b[i];
        if (c[i] >= 10) {
            c[i + 1]++;
            c[i] -= 10;
        }
    }
}

void printBigNum (int a []) {
    int i;
    for (i = MAXN -1; a[i] == 0 && i >= 0; --i)
        ;
    if (i == -1) {
        cout << 0 << endl;
        return;
    }
    for (; i >= 0; --i)
        cout << a[i];
    cout << endl;
}

int main () {
    int a [MAXN], b [MAXN], c [MAXN];
    char str [MAXN];
    cin >> str;
    conv (a, str);
    cin >> str;
    conv (b, str);
    BigNumAdd (a, b, c);
    printBigNum (c);
    return 0;
}

