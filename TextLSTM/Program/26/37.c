int main () {
    char a [100];
    cin.getline (a, 100);
    char *p = a;
    for (; *p != '\0'; p++)
        if (*p == ' ' && *(p + 1) == ' ') {
            for (char *q = p + 1;
            *q != '\0'; q++)
                *q = *(q + 1);
            p -= 1;
        }
    cout << a;
    return 0;
}

