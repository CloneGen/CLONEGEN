int main () {
    char s [31], *p = NULL;
    cin.getline (s, 31);
    for (p = s; p < s + strlen (s); ++p) {
        if (*p > 47 && *p < 58)
            cout << *p;
        else {
            cout << endl;
            while (*(p + 1) < 48 || *(p + 1) > 57)
                ++p;
        }
    }
    return 0;
}

