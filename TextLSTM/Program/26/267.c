int main () {
    char str [100];
    int i = 0, j = 0, k = 0, m = 0;
    cin.getline (str, 101, '\n');
    k = strlen (str);
    for (i = 0; i < k; i++) {
        if (str[i] == ' ') {
            for (j = i; j < k; j++) {
                if (str[j] != ' ')
                    break;
            }
            for (m = i + 1; m <= j - 1; m++) {
                str[m] = 1;
            }
        }
    }
    for (i = 0; i < k; i++) {
        if (str[i] != 1)
            cout << str[i];
    }
    return 0;
}

