int main () {
    char s [100], *p = s;
    int i = 0;
    gets (s);
    while (p - s + 1 <= strlen (s)) {
        if (*p != ' ')
            i = 0;
        if (*p == ' ')
            i++;
        if (i <= 1)
            cout << *p;
        p++;
    }
    return 0;
}

