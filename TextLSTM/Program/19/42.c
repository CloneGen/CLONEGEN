int main () {
    char input [110], replaced [110], replace [110];
    char *p, *start;
    int len;
    char temp;
    cin.getline (input, 110);
    cin.getline (replaced, 110);
    cin.getline (replace, 110);
    len = strlen (replaced);
    p = strstr (input, replaced);
    start = input;
    while (p != NULL) {
        if ((p == input || isalpha (*(p - 1)) == 0) && isalpha (*(p + len)) == 0) {
            *p = '\0';
            cout << start << replace;
            start = p + len;
            p = strstr (start, replaced);
        }
        else {
            p = input + (p - input) + len;
            temp = *p;
            *p = '\0';
            cout << start;
            start = p;
            *start = temp;
            p = strstr (start, replaced);
        }
    }
    cout << start << endl;
    return 0;
}

