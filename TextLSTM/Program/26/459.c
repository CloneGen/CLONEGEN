int main () {
    int i, begin;
    char a [1000];
    while (1) {
        cin.getline (a, 999);
        if (a[0] == '\0')
            break;
        for (i = 0; i <= 999; i++) {
            if (a[i] != ' ') {
                begin = i;
                break;
            }
        }
        for (i = begin; i <= 999; i++) {
            if (a[i] != ' ' || (a[i] == ' ' && a[i + 1] != ' ' && a[i + 1] != '\0')) {
                cout << a[i];
            }
            if (a[i + 1] == '\0')
                break;
        }
        cout << endl;
    }
    return 0;
}

