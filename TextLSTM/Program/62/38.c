int main () {
    char a [101], b [101];
    char *p, *q;
    cin.getline (a, 100);
    for (p = a, q = b; *p != '\0'; p++) {
        if (!((*p == ' ') && (*(p - 1) == ' '))) {
            *q = *p;
            q++;
        }
    }
    *q = '\0';
    cout << b << endl;
    return 0;
}

