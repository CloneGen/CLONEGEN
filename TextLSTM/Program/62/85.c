int main () {
    char input [100];
    char *p = NULL;
    int i;
    int length;
    p = input;
    cin.getline (input, 100);
    length = strlen (input);
    cout << input[0];
    for (i = 1; i < length; i++) {
        p++;
        if (*p == ' ' && *(p - 1) == ' ')
            continue;
        cout << *p;
    }
    return 0;
}

