int main () {
    char a [31], *p;
    cin.getline (a, 31);
    for (p = a; *p != '\0', p < a + 31; p++) {
        if (*p <= '9' && *p >= '0')
            cout << *p;
        else if (*(p - 1) <= '9' && *(p - 1) >= '0')
            cout << endl;
    }
    return 0;
}

