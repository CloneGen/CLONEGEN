int main () {
    int n;
    cin >> n;
    getchar ();
    for (int i = 0;
    i < n; i++) {
        char a [81];
        cin.getline (a, 81);
        int j;
        int l = strlen (a);
        if ((a[0] >= 'a' && a[0] <= 'z') || (a[0] >= 'A' && a[0] <= 'Z') || a[0] == '_') {
            for (j = 1; j < l; j++) {
                if ((a[j] >= 'a' && a[j] <= 'z') || (a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= '0' && a[j] <= '9') || (a[j] == '_'))
                    continue;
                else
                    break;
            }
            if (j == l)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}

