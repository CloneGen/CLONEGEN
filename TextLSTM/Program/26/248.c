int main () {
    char a [100];
    gets (a);
    char *p;
    p = a;
    int i;
    for (i = 0; a[i] != '\0'; i++) {
        if (*(p + i) == ' ' && *(p + i - 1) == ' ')
            continue;
        cout << *(p + i);
    }
    cout << endl;
    return 0;
}

