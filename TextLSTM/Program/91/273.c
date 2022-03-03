int main () {
    char s [101], s1 [101];
    char *ps = s, *ps1 = s1;
    char c1, c2;
    cin.getline (s, 101);
    int i;
    for (i = 0; i < strlen (s) - 1; i++) {
        c1 = *(ps + i);
        c2 = *(ps + i + 1);
        *(ps1 + i) = c1 + c2;
    }
    *(ps1 + i) = *(ps + i) + *(ps + 0);
    *(ps1 + i + 1) = '\0';
    cout << &ps1[0] << endl;
    return 0;
}

