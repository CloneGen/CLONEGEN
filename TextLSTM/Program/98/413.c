int main () {
    int n, i, len = 0, l;
    char word [64], p [64] = "";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << p;
        cin >> word;
        l = strlen (word);
        if (len + l > 80) {
            cout << endl;
            len = 0;
        }
        else if (i > 0)
            cout << " ";
        len += l + 1;
        strcpy (p, word);
    }
    cout << p;
    return 0;
}

