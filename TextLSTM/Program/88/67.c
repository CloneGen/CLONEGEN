int main () {
    char str [31];
    cin.getline (str, 31);
    char *p = str;
    int i = 0;
    while (p < str + strlen (str)) {
        if (*p >= '0' && *p <= '9')
            cout << *p;
        if (*p >= '0' && *p <= '9' && !(*(p + 1) >= '0' && *(p + 1) <= '9'))
            cout << endl;
        p++;
    }
    return 0;
}

