int main () {
    int n;
    int num = 0;
    int linelen = 0;
    char a [45] = {0};
    cin >> n;
    for (int i = 0;
    i < n; ++i) {
        cin >> a;
        num = strlen (a);
        if (num + 1 + linelen > 80) {
            cout << endl << a;
            linelen = num;
        }
        else {
            if (linelen != 0) {
                linelen += num + 1;
                cout << " ";
            }
            else {
                linelen = num;
            }
            cout << a;
        }
    }
    cin >> n;
    return 0;
}

