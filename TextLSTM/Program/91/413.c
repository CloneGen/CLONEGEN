int main () {
    char str1 [101], str2 [101], *p = str1, *q = str2;
    int len;
    cin.getline (str1, 101, '\n');
    len = strlen (str1);
    for (int i = 0;
    i <= len - 2; i++) {
        *(q + i) = *(p + i) + *(p + i + 1);
    }
    *(q + len - 1) = *(p + len - 1) + *p;
    for (int i = 0;
    i < len; q++, i++)
        cout << *q;
    return 0;
}

