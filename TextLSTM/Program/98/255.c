int main () {
    char a [45];
    int m, n;
    int count = 0;
    cin >> m;
    n = m + 1;
    for (int i = 1;
    i <= m; i++) {
        cin >> a;
        if (count == 0) {
            cout << a;
            count = strlen (a);
        }
        else if (count + strlen (a) + 1 < 80) {
            cout << " " << a;
            count = count + strlen (a) + 1;
        }
        else if (count + strlen (a) + 1 == 80) {
            cout << " " << a << endl;
            count = 0;
        }
        else {
            cout << endl;
            cout << a;
            count = strlen (a);
        }
    }
    return 0;
}

