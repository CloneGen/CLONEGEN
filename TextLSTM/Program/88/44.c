int main () {
    char a [31];
    char *p = a;
    cin.getline (a, 31);
    for (; *p != '\0'; p++) {
        if (*p >= '0' && *p <= '9' && *(p + 1) >= '0' && *(p + 1) <= '9')
            cout << *p;
        else if (*p >= '0' && *p <= '9' && (*(p + 1) < '0' || *(p + 1) > '9'))
            cout << *p << endl;
        else
            continue;
    }
    return 0;
}

