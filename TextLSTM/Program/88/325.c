int main () {
    char str [MAXL +10];
    int nNumbers = 0;
    cin.getline (str, sizeof (str));
    for (char *p = str;
    ; p++) {
        if (*p >= '0' && *p <= '9') {
            cout << *p;
            nNumbers++;
        }
        else if (nNumbers && *(p - 1) >= '0' && *(p - 1) <= '9')
            cout << endl;
        if (!*p)
            break;
    }
    return 0;
}

