int main () {
    char a [31], *p = NULL;
    cin.getline (a, 31, '\n');
    p = a;
    while (*p != '\0') {
        if (*p <= '9' && *p >= '0')
            cout << *p;
        if ((!(*p <= '9' && *p >= '0')) && (*(p - 1) <= '9' && *(p - 1) >= '0'))
            cout << endl;
        p++;
    }
    return 0;
}

