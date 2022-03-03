int main () {
    char a [100], b [100];
    cin.getline (a, 100);
    char *p = a, *q = b;
    for (; *p != '\0';) {
        if (*p == ' ') {
            p++;
            if (*p == ' ')
                continue;
            else {
                p--;
                *q++ = *p++;
            }
        }
        else
            *q++ = *p++;
    }
    *q = '\0';
    cout << b;
    return 0;
}

