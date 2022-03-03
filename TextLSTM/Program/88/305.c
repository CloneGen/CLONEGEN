int main () {
    char *p;
    char a [33];
    gets (a);
    p = a;
    while (p - a <= strlen (a)) {
        if (*p == '-') {
            p++;
            while (*p >= '0' && *p <= '9')
                p++;
        }
        else if (*p >= '0' && *p <= '9') {
            cout << *p;
            if (*(p + 1) < '0' || *(p + 1) > '9')
                cout << endl;
            p++;
        }
        else if (*p < '0' || *p > '9')
            p++;
    }
    return 0;
}

