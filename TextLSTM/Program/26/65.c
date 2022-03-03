int main () {
    int num, i, j, len;
    char str [101], *p;
    cin.getline (str, 101);
    len = strlen (str);
    for (j = 0; j < len; j++) {
        p = str + j;
        num = -1;
        while (*p == ' ') {
            num++;
            p++;
        }
        if (num > 0) {
            for (i = p - str; i < len; i++)
                *(p - num) = *p++;
            len -= num;
        }
    }
    str[len] = '\0';
    cout << str << endl;
    return 0;
}

