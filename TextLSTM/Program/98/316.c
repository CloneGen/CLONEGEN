int main () {
    int n, i, len = 0;
    cin >> n;
    char word [1000] [41];
    for (i = 0; i < n; i++)
        cin >> *(word + i);
    i = 0;
    while (i < n) {
        if (len == 0) {
            cout << *(word + i);
            len += strlen (*(word + i++));
        }
        else if (len + 1 + strlen (*(word + i)) <= 80) {
            cout << ' ' << *(word + i);
            len += (strlen (*(word + i++)) + 1);
        }
        else {
            cout << endl;
            len = 0;
        }
    }
    return 0;
}

