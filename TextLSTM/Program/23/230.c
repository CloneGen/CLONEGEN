int main () {
    char str [100] [20] = {'\0'};
    int i = 0, k;
    while (true) {
        cin >> str[i];
        i++;
        if (cin.peek () == '\n')
            break;
    }
    for (k = i - 1; k >= 0; k--) {
        if (k == 0)
            cout << str[k];
        else
            cout << str[k] << ' ';
    }
    return 0;
}

