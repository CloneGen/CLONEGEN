int main () {
    char a [101];
    gets (a);
    char *q = a;
    for (q = a + 2; *q != '\0'; q++) {
        if (*q == ' ' && *(q - 1) == ' ') {
            char *qq = q;
            while (*(q + 1) != '\0') {
                *(q++) = *(q + 1);
            }
            *q = '\0';
            q = qq - 1;
        }
    }
    q = a;
    cout << q << endl;
    return 0;
}

