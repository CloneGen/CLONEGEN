int main () {
    char s [40];
    int i, flag = 0, l;
    cin.getline (s, 40);
    l = strlen (s);
    for (i = 0; i < l; i++) {
        if (s[i] <= '9' && s[i] >= '0') {
            cout << s[i];
            flag = 1;
        }
        else {
            if (flag == 1) {
                cout << endl;
                flag = 0;
            }
        }
    }
    return 0;
}

