int main () {
    char a [31];
    int i, len;
    char *p = NULL;
    cin.getline (a, 31);
    len = strlen (a);
    for (p = a; p < a + len; p++) {
        if (*p >= '0' && *p <= '9')
            cout << *p;
        else {
            if (*(p + 1) < '0' || *(p + 1) > '9') {
            }
            if (*(p + 1) >= '0' && *(p + 1) <= '9')
                cout << endl;
        }
    }
    return 0;
}

