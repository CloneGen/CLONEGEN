int main () {
    int i = 0, j;
    char str [100];
    for (j = 0; j < 100; j++) {
        str[j] = 0;
    }
    cin.get (str, 100, '\n');
    while (i < 100) {
        if (str[i] != 0) {
            if (str[i] != ' ') {
                cout << str[i];
            }
            if (str[i] == ' ' && str[i + 1] != ' ') {
                cout << " ";
            }
        }
        i++;
    }
    return 0;
}

