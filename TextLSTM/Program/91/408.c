int main () {
    int i, l;
    char str1 [1000], str2 [1000], *m = str1, *n = str2;
    cin.getline (str1, 1000);
    l = strlen (str1);
    for (i = 0; i < l - 1; i++) {
        *n++ = *m + *++m;
    }
    *n = str1[0] + *m;
    *++n = '\0';
    cout << str2;
    return 0;
}

