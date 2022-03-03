char printc (char c) {
    if (c <= 'z' && c >= 'a')
        return c + 'Z' - 'z';
    return c;
}

int main () {
    char c [1000] = {0};
    char *p = NULL;
    int num = 0;
    cin >> c;
    for (p = c; *p; p++) {
        if (p == c || (*p != *(p - 1) && (*p != *(p - 1) + 'z' - 'Z') && (*p != *(p - 1) + 'Z' - 'z'))) {
            if (p != c)
                cout << num << ')';
            num = 1;
            cout << '(' << printc (*p) << ',';
        }
        else
            num++;
    }
    cout << num << ')' << endl;
    return 0;
}

