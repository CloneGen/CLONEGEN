int main () {
    char a [31];
    int i = 0;
    char *p = 0;
    int f = 0;
    memset (a, 0, sizeof (a));
    cin.getline (a, 31);
    p = a;
    for (i = 1; i <= 30; i++, p++) {
        if (((*p < '0') || (*p > '9')) && (f == 1)) {
            cout << endl;
            f = 0;
        }
        if ((*p >= '0') && (*p <= '9') && (f == 1))
            cout << *p;
        if ((*p >= '0') && (*p <= '9') && (f == 0)) {
            cout << *p;
            f = 1;
        }
        if (*p == '\0')
            break;
    }
    return 0;
}

