int main () {
    char start [200], result [200];
    char *p = NULL;
    int i = 0, j;
    cin.getline (start, 200);
    for (p = start; *p != '\0'; p++) {
        if ((*p != ' ') || (*(p + 1) != ' '))
            cout << *p;
    }
    return 0;
}

