int main () {
    char str [300], *p, *q;
    cin.getline (str, 300);
    p = str;
    while (*p != '\0') {
        if (*p == ' ') {
            if (*(p + 1) == ' ') {
                q = p;
                while (*q != '\0') {
                    *q = *(q + 1);
                    q++;
                }
            }
            else {
                p++;
            }
        }
        else {
            p++;
        }
    }
    cout << str;
    return 0;
}

