void search (char str [502], int len, int t, char p, char q) {
    int i, j, m = 0;
    if (str[len - 1] == '0')
        return;
    for (j = t; j < len && m == 0; j++) {
        if (str[j] == q) {
            for (i = j - 1; i >= 0 && m == 0; i--) {
                if (str[i] == p) {
                    str[i] = '0';
                    str[j] = '0';
                    cout << i << " " << j << endl;
                    m = 1;
                }
            }
        }
    }
    search (str, len, j, p, q);
}

int main () {
    char str [502], p, q;
    cin >> str;
    int len = strlen (str);
    p = str[0];
    for (int i = 1;
    str[i] != '\0'; i++) {
        if (str[i] != p) {
            q = str[i];
            break;
        }
    }
    search (str, len, 1, p, q);
    return 0;
}

