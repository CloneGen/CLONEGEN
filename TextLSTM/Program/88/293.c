int main () {
    char str [50], *p = str;
    int i = 0;
    gets (p);
    for (i = 0; *(p + i) != '\0'; i++) {
        if (*(p + i) < 48 || *(p + i) > 57)
            continue;
        if (*(p + i + 1) < 48 || *(p + i + 1) > 57)
            cout << *(p + i) << endl;
        else
            cout << *(p + i);
    }
    return 0;
}

