int main () {
    char c, str [150], *p = str;
    cin.getline (p, 150, '\n');
    int i, len;
    len = strlen (p);
    *(p + len) = *p;
    for (i = 0; i < len; i++) {
        c = *(p + i) + *(p + i + 1);
        cout << c;
    }
    return 0;
}

