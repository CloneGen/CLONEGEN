int main () {
    char str [100], *p = NULL;
    cin.getline (str, 100);
    p = str;
    for (p = str; *p != '\0'; ++p) {
        if (*p != ' ') {
            while (*p != ' ' && *p != '\0')
                cout << *p++;
            if (*p == '\0')
                break;
            else
                cout << ' ';
            p--;
        }
    }
    return 0;
}

