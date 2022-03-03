int main () {
    char s [100];
    char a [100] [100];
    int b [100] = {0};
    int i = 0, j = 0;
    for (;;) {
        cin >> s;
        for (j = 0; j < 100; j++) {
            if (s[j] != '\0')
                b[i]++;
        }
        for (j = 0; j < b[i]; j++) {
            a[i][j] = s[j];
        }
        i++;
        if (getchar () == '\n')
            break;
    }
    cout << a[0];
    for (j = 1; j < i; j++) {
        cout << " " << a[j];
    }
    return 0;
}

