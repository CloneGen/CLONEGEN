int main () {
    int n;
    char s [81];
    cin >> n;
    cin.getline (s, 81);
    while (n > 0) {
        int l, i;
        cin.getline (s, 81);
        l = strlen (s);
        if (s[0] == '_' || (s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z')) {
            for (i = 1; i < l; i++) {
                if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '_')
                    continue;
                else {
                    cout << '0' << endl;
                    break;
                }
            }
            if (i == l)
                cout << '1' << endl;
        }
        else
            cout << '0' << endl;
        n--;
    }
    return 0;
}

