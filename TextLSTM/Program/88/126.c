int main () {
    char str [40] = {'\0'};
    int pos_c = 0, len = 0;
    int i, j, k;
    cin.getline (str, 35);
    len = strlen (str);
    for (i = len; i >= 1; i--)
        str[i] = str[i - 1];
    str[0] = 'a';
    str[++len] = '\0';
    for (i = 0; i < len; i++) {
        if (!isdigit (str[i])) {
            if (i == pos_c + 1)
                pos_c = i;
            else {
                int ok = 0;
                for (j = pos_c + 1; j < i; j++) {
                    ok = 1;
                    cout << str[j];
                }
                if (ok)
                    cout << endl;
                pos_c = i;
            }
        }
    }
    int ok = 0;
    for (j = pos_c + 1; j < len; j++) {
        ok = 1;
        cout << str[j];
    }
    if (ok)
        cout << endl;
    return 0;
}

