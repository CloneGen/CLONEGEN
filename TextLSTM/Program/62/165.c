int main () {
    int n;
    char a [100];
    char *p;
    cin.getline (a, 100);
    n = strlen (a);
    p = a;
    while (*p == ' ') {
        p = p + 1;
    }
    cout << *p;
    p++;
    for (p;
    p < a + n; p++) {
        if (*(p - 1) != ' ' || *p != ' ')
            cout << *p;
    }
    return 0;
}

