int main () {
    char a [102];
    cin.getline (a, 102, '\n');
    char *p = a;
    while (*p != '\0') {
        if (*(p + 1) == '\0') {
            cout << (char) (*p + a[0]);
        }
        else {
            cout << (char) (*p + *(p + 1));
        }
        p++;
    }
    return 0;
}

