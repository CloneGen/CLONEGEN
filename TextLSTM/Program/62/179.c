int main () {
    char a [100] = {'\0'};
    char c;
    int i = 1;
    while (c = cin.get ()) {
        if ((a[i - 1] == ' ') && (c == ' ')) {
            continue;
        }
        if (c == '\n') {
            break;
        }
        else {
            a[i] = c;
            i++;
        }
    }
    for (int i = 1;
    i < 100; i++) {
        if (a[i] != '\0') {
            cout << a[i];
        }
    }
    return 0;
}

