int main () {
    char str [31];
    cin.getline (str, 31);
    char *p = str;
    while (*p != '\0') {
        if (*p >= 48 && *p <= 57) {
            cout << *p;
            p++;
        }
        else {
            cout << endl;
            do {
                p++;
            }
            while ((*p < 48 || *p > 57) && (*p != '\0'));
        }
    }
    return 0;
}

