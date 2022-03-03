int main () {
    char str [31], *p;
    gets (str);
    int l = strlen (str);
    p = str;
    if (*p >= '0' && *p <= '9')
        cout << *p;
    p = str + 1;
    while (p < str + l) {
        if (*p >= '0' && *p <= '9')
            cout << *p;
        else if (*(p - 1) >= '0' && *(p - 1) <= '9' && !(*p >= '0' && *p <= '9'))
            cout << endl;
        p++;
    }
    cout << endl;
    return 0;
}

