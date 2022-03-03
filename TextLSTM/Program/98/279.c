int main () {
    int n;
    cin >> n;
    char w [41];
    int l = 0;
    cin >> w;
    l = strlen (w);
    cout << w;
    n--;
    while (n--) {
        cin >> w;
        if (l + strlen (w) + 1 <= 80) {
            l = l + strlen (w) + 1;
            cout << ' ' << w;
        }
        else {
            l = strlen (w);
            cout << endl << w;
        }
    }
    return 0;
}

