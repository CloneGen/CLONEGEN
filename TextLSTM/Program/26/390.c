int main () {
    char a [100];
    gets (a);
    for (int i = 0;
    i < strlen (a); i++) {
        if (a[i] != ' ')
            cout << a[i];
        if (a[i] == ' ' && a[i + 1] != ' ')
            cout << a[i];
    }
    return 0;
}

