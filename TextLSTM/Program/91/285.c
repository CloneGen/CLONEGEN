int main () {
    int i, l;
    char s1 [101];
    char s2 [101] = {0};
    char *p = NULL, *q = NULL;
    gets (s1);
    l = strlen (s1);
    for (i = 0, p = s1, q = s2; i < l; i++, p++, q++) {
        if (i < l - 1) {
            *q = *p + *(p + 1);
        }
        else {
            *q = *p + *(p - l + 1);
        }
    }
    cout << s2 << endl;
    return 0;
}

