int main () {
    char x [1000];
    gets (x);
    int indexOfShort = 0, indexOfLong = 0;
    int lenOfShort = 10000, lenOfLong = 0;
    int curLen = 0, curIndex = 0;
    for (int i = 0;
    i < strlen (x); ++i) {
        if (x[i] != ' ') {
            curLen++;
            if (i != strlen (x) - 1)
                continue;
        }
        if (curLen < lenOfShort) {
            lenOfShort = curLen;
            indexOfShort = curIndex;
        }
        if (curLen > lenOfLong) {
            lenOfLong = curLen;
            indexOfLong = curIndex;
        }
        curIndex = i + 1;
        curLen = 0;
    }
    for (int i = 0;
    i != lenOfLong; ++i)
        printf ("%c", x[indexOfLong + i]);
    printf ("\n");
    for (int i = 0;
    i != lenOfShort; ++i)
        printf ("%c", x[indexOfShort + i]);
    return 0;
}

