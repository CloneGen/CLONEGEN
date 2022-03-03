int main () {
    char str [101];
    char *p;
    int i, len, j, k, count;
    cin.getline (str, 101);
    p = str;
    len = strlen (str);
    for (i = 0; i < len; i++) {
        if ((*(p + i) == ' ') && (*(p + i - 1) != ' ')) {
            k = i;
            count = 0;
        }
        if ((*(p + i) == ' ') && (*(p + i - 1) == ' ')) {
            count++;
        }
        if ((*(p + i) != ' ') && (*(p + i - 1) == ' ')) {
            for (j = i; j <= len; j++, k++) {
                *(p + k + 1) = *(p + j);
            }
            len = len - count;
            i = i - count;
        }
    }
    cout << p << endl;
    return 0;
}

