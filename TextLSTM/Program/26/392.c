int main () {
    int i = 0, len;
    char str [100];
    char *p;
    gets (str);
    p = str;
    len = strlen (str);
    for (;; p++) {
        if (*p != ' ')
            cout << *p;
        else {
            p++;
            if (*p != ' ')
                cout << ' ';
            p--;
        }
        i++;
        if (i >= len)
            break;
    }
    return 0;
}

