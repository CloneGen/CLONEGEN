int main () {
    char str [31];
    int i, j;
    char *p = NULL;
    cin.getline (str, 31);
    p = str;
    i = 0;
    while (str[i] != '\0')
        i++;
    for (j = 0; j < i; j++) {
        if (*p >= '0' && *p <= '9') {
            cout << *p;
            if (*(p + 1) < '0' || *(p + 1) > '9')
                cout << endl;
        }
        p++;
    }
    return 0;
}

