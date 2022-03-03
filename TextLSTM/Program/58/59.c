int main () {
    char str [81];
    int n, i = 0;
    cin >> n;
    cin.getline (str, 81);
    while (i < n) {
        cin.getline (str, 81);
        if (str[0] == '_' || (str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z')) {
            int len = strlen (str), j;
            for (j = 1; j < len; j++) {
                if (str[j] != '_' && (str[j] < 'A' || str[j] > 'Z') && (str[j] < 'a' || str[j] > 'z') && (str[j] < '0' || str[j] > '9'))
                    break;
            }
            if (j == len) {
                cout << 1 << endl;
                i++;
                continue;
            }
        }
        cout << 0 << endl;
        i++;
    }
    return 0;
}

