int main () {
    char word [300] [41];
    int i, n, len;
    cin >> n >> *(word + 0);
    cout << *(word + 0);
    len = strlen (*(word + 0));
    for (i = 1; i < n; i++) {
        cin >> *(word + i);
        if (len + strlen (*(word + i)) < 80) {
            cout << ' ' << *(word + i);
            len += strlen (*(word + i)) + 1;
        }
        else {
            cout << endl << *(word + i);
            len = strlen (*(word + i));
        }
    }
    return 0;
}

