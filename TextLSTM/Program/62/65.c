int main () {
    char a [100];
    char *p = NULL, *q = NULL;
    cin.getline (a, 100);
    for (p = a, q = a + 1; *p != '\0'; p++, q++) {
        if (*p == ' ' && *q == ' ')
            continue;
        else
            cout << *p;
    }
    return 0;
}

