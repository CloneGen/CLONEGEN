int equal (char *x, char *y) {
    for (int k = 0;
    x[k] != '\0' || y[k] != '\0'; k++)
        if (x[k] != y[k])
            return 0;
    return 1;
}

int main () {
    char str [100] [100];
    int number = 0;
    while (1) {
        cin >> str[number++];
        if (cin.get () == '\n')
            break;
    }
    char str1 [100], str2 [100];
    cin >> str1 >> str2;
    for (int k = 0;
    k != number - 1; k++) {
        if (equal (str[k], str1)) {
            cout << str2 << " ";
            continue;
        }
        cout << str[k] << " ";
    }
    if (equal (str[number - 1], str1))
        cout << str2 << endl;
    else
        cout << str[number - 1] << endl;
    return 0;
}

