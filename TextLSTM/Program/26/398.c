int main () {
    char a [100];
    int i = 0, j = 0;
    cin.get (a, 101);
    for (i = 0; i < strlen (a); i++) {
        if (a[i] == ' ') {
            for (j = i + 1; j < 100; j++) {
                if (a[j] == ' ')
                    a[j] = -1;
                if (a[j] != ' ' && a[j] != -1)
                    break;
            }
        }
    }
    for (i = 0; i < strlen (a); i++) {
        if (a[i] != -1)
            cout << a[i];
    }
    return 0;
}

