int main () {
    int len, count = 0;
    char *p, *q;
    char a [101];
    cin.getline (a, 101);
    len = strlen (a);
    for (q = a, p = a; p < a + len; p++)
        if ((*p != ' ') || ((*p == ' ') && (*(p + 1) != ' '))) {
            *(q++) = *p;
            count++;
        }
    for (q = a; q < a + count; q++)
        cout << *q;
    return 0;
}

