int main () {
    char a [100];
    char *p = NULL, *q = NULL;
    cin.getline (a, 100);
    for (p = a, q = a; *q != '\0'; q++) {
        if (*q == ' ' && *(q + 1) == ' ')
            continue;
        else
            *p++ = *q;
    }
    q = p - 1;
    for (p = a; p <= q; p++)
        cout << *p;
    return 0;
}

