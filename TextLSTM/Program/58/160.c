int main () {
    int n;
    cin >> n;
    char s [81];
    cin.getline (s, 81);
    while (n > 0) {
        int i, l, m = 0;
        cin.getline (s, 81);
        l = strlen (s);
        if ((s[0] == '_') || (s[0] >= 'A' && s[0] <= 'Z' || (s[0] >= 'a' && s[0] <= 'z'))) {
            for (i = 1; i < l; i++) {
                if (s[i] == '_' || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                    m++;
            }
            if (m == l - 1)
                cout << '1' << endl;
            else
                cout << '0' << endl;
        }
        else
            cout << '0' << endl;
        n--;
    }
    return 0;
}

