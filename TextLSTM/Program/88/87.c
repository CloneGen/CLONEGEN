int main () {
    int i;
    char a [31], *p = NULL;
    cin.getline (a, 31);
    p = a;
    for (i = 0; *(p + i) != '\0'; i++) {
        if (*(p + i) <= '9' && *(p + i) >= '0' && *(p + i + 1) <= '9' && *(p + i + 1) >= '0')
            cout << *(p + i);
        if (*(p + i) <= '9' && *(p + i) >= '0' && (*(p + i + 1) > '9' || *(p + i + 1) < '0'))
            cout << *(p + i) << endl;
    }
    return 0;
}

