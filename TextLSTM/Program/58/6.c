int main () {
    int n, hefa [100] = {0};
    cin >> n;
    cin.get ();
    for (int i = 0;
    i < n; i++) {
        char ch [81] = {'\0'};
        int lench;
        cin.getline (ch, 81, '\n');
        for (lench = 0; lench < 81; lench++)
            if (ch[lench] == '\0')
                break;
        if ((ch[0] != '_') && (ch[0] > 'Z' || ch[0] < 'A') && (ch[0] > 'z' || ch[0] < 'a'))
            hefa[i] = 1;
        else if (lench > 1)
            for (int j = 1;
            j < lench; j++)
                if ((ch[j] != '_') && (ch[j] > 'Z' || ch[j] < 'A') && (ch[j] > 'z' || ch[j] < 'a') && (ch[j] > '9' || ch[j] < '0')) {
                    hefa[i] = 1;
                    break;
                }
                else
                    ;
        else
            ;
    }
    for (int k = 0;
    k < n; k++)
        if (hefa[k] == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    return 0;
}

