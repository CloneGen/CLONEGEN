int main () {
    int n;
    cin >> n;
    int len, len2;
    char ans [32768];
    memset (ans, 0, sizeof (ans));
    cin >> ans;
    len = strlen (ans);
    len2 = strlen (ans);
    for (int i = 1;
    i < n; i++) {
        char word [50];
        cin >> word;
        if (len + 1 + strlen (word) > 80) {
            ans[len2] = '\n';
            strcat (ans, word);
            len = strlen (word);
            len2 = len2 + strlen (word) + 1;
        }
        else {
            ans[len2] = ' ';
            strcat (ans, word);
            len = len + 1 + strlen (word);
            len2 = len2 + 1 + strlen (word);
        }
    }
    cout << ans << endl;
    return 0;
}

