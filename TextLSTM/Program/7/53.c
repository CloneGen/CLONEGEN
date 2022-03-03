int main () {
    char *p = NULL;
    char str [100], substr [100], restr [100];
    cin >> str >> substr >> restr;
    p = strstr (str, substr);
    if (p != NULL) {
        strcat (restr, p + strlen (substr));
        *p = '\0';
        strcat (str, restr);
    }
    cout << str;
    return 0;
}

