int main () {
    char str [31], *p = str;
    cin.getline (str, 31);
    if (isdigit (*p))
        cout << *p++;
    while (*p != 0) {
        if (isdigit (*p))
            cout << *p;
        else if (isdigit (*p) != isdigit (*(p - 1)))
            cout << '\r';
        p++;
    }
    return 0;
}

