int main () {
    char str1 [105], str2 [105];
    int i, j = 0, k, len;
    char *p, *q;
    cin.getline (str1, 105);
    len = strlen (str1);
    p = str1;
    q = str2;
    for (p = str1; p < str1 + len - 1; p++) {
        *q = *p + *(p + 1);
        q++;
    }
    *q = str1[len - 1] + str1[0];
    for (q = str2; q < str2 + len; q++) {
        cout << *q;
    }
    return 0;
}

