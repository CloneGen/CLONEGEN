int main () {
    char str [31], *p = NULL;
    int i;
    cin.getline (str, 31);
    p = str;
    for (i = 0; *p != '\0'; p++) {
        if (*p >= '0' && *p <= '9')
            cout << *p;
        else if (*(p - 1) >= '\0' && *(p - 1) <= '9')
            cout << endl;
    }
    return 0;
}

