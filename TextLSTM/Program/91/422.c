int main () {
    char a [101];
    cin.getline (a, 101, '\n');
    char *p = NULL;
    p = a;
    while (*p != '\0') {
        if (*(p + 1) != '\0')
            cout << (char) (*p + *(p + 1));
        else
            cout << (char) (*p + a[0]);
        p++;
    }
    return 0;
}

