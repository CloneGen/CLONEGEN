int main () {
    char str1 [101], str2 [101];
    char *p = str1, *q = str2;
    int l, i;
    cin.getline (str1, 101, '\n');
    l = strlen (str1);
    for (i = 0; i < l; i++) {
        if (i != l - 1)
            *(q + i) = *(p + i) + *(p + i + 1);
        else
            *(q + i) = *(p + i) + *p;
    }
    for (i = 0; i < l; i++)
        cout << *(q + i);
    return 0;
}

