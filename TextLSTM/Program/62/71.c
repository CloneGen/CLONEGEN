int main () {
    char a [200];
    int i;
    char *p = a, *q = NULL;
    cin.getline (a, 200, '\n');
    while (*p != '\0') {
        if (*p == ' ') {
            if (*(p + 1) != ' ') {
                p++;
            }
            else {
                q = p;
                for (p = p + 1; *p != '\0'; p++) {
                    *p = *(p + 1);
                }
                p = q;
            }
        }
        else {
            p++;
        }
    }
    p = a;
    for (; *p != '\0'; p++) {
        cout << *p;
    }
    return 0;
}

