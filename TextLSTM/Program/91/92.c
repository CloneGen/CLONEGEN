int main () {
    char string1 [120], string2 [120];
    memset (string1, '\0', sizeof (string1));
    memset (string2, '\0', sizeof (string2));
    char *p = NULL, *q = NULL;
    q = string1;
    p = string2;
    cin.getline (string1, 120, '\n');
    int length = strlen (string1);
    for (int i = 0;
    i < length; i++) {
        if (i == (length - 1)) {
            *(p + i) = *(q + i) + (*q);
        }
        else {
            *(p + i) = *(q + i) + (*(q + i + 1));
        }
    }
    *(p + length) = '\0';
    cout << string2 << endl;
    return 0;
}

