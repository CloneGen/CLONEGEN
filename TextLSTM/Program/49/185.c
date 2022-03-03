void check (char a [], int totLen, int cheLen);

int main () {
    char a [500] = {'\0'};
    int totLen;
    cin >> a;
    totLen = strlen (a);
    check (a, totLen, 2);
    return 0;
}

void check (char a [], int totLen, int cheLen) {
    int i, flag, j;
    if (cheLen > totLen)
        return;
    for (i = 0; i <= totLen - cheLen; i++) {
        flag = 1;
        for (j = 1; j <= cheLen / 2; j++)
            if (a[i + j - 1] != a[i + cheLen - j]) {
                flag = 0;
                break;
            }
        if (flag == 1) {
            for (j = 0; j < cheLen; j++) {
                cout << a[j + i];
            }
            cout << endl;
        }
    }
    check (a, totLen, cheLen + 1);
}

