int main () {
    char str [102];
    int i = 0, len = 0, count = 0;
    cin.getline (str, 102);
    while (i < strlen (str)) {
        if (str[i] != ' ') {
            cout << str[i];
            count = 0;
        }
        if (str[i] == ' ') {
            count++;
            if (count == 1)
                cout << str[i];
        }
        i++;
    }
    cout << endl;
    return 0;
}

