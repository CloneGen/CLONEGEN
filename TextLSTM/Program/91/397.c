int main () {
    char s [110], s1 [110];
    char *p = NULL, *p1 = NULL;
    cin.getline (s, 110);
    for (p = s; *p != '\0'; p++)
        ;
    p--;
    p1 = p - s + s1 + 1;
    *p1 = '\0';
    p1--;
    *p1 = *p + *s;
    for (p--; p >= s; p--) {
        p1--;
        *p1 = *p + *(p + 1);
    }
    for (p1 = s1; *p1 != '\0'; p1++) {
        cout << *p1;
    }
    cout << endl;
    return 0;
}

