char *Strlwr (char *);

int main () {
    char input [110], replaced [110], replace [110];
    char inputL [110], replacedL [110];
    char *p, *pL, *start;
    int len;
    char temp;
    cin.getline (input, 110);
    cin.getline (replaced, 110);
    cin.getline (replace, 110);
    strcpy (inputL, input);
    strcpy (replacedL, replaced);
    len = strlen (replaced);
    pL = strstr (inputL, replacedL);
    start = input;
    while (pL != NULL) {
        if ((pL == inputL || isalpha (*(pL - 1)) == 0) && isalpha (*(pL + len)) == 0) {
            p = input + (pL - inputL);
            *p = '\0';
            cout << start << replace;
            start = p + len;
            pL = strstr ((start - input) + inputL, replacedL);
        }
        else {
            p = input + (pL - inputL) + len;
            temp = *p;
            *p = '\0';
            cout << start;
            start = p;
            *start = temp;
            pL = strstr ((start - input) + inputL, replacedL);
        }
    }
    cout << start << endl;
    return 0;
}

char *Strlwr (char *p) {
    for (; *p != '\0'; p++)
        if (*p >= 'A' && *p <= 'Z')
            *p += 32;
    return p;
}

