int main () {
    char a [10000] [81] = {0};
    int n, i = 0, j = 0;
    int num = 0;
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++) {
        cin.getline (a[i], 81);
    }
    for (i = 0; i < n - 1; i++) {
        num = 0;
        for (j = 0; j < strlen (a[i]); j++) {
            if ((a[i][j] >= 'A' && a[i][j] <= 'Z') || (a[i][j] >= 'a' && a[i][j] <= 'z') || a[i][j] == '_' || (a[i][j] >= '0' && a[i][j] <= '9'))
                num++;
            else {
                cout << "0" << endl;
                break;
            }
            if (num == strlen (a[i])) {
                if ((a[i][0] >= 'A' && a[i][0] <= 'Z') || (a[i][0] >= 'a' && a[i][0] <= 'z') || a[i][0] == '_')
                    cout << "1" << endl;
                else {
                    cout << "0" << endl;
                    break;
                }
            }
        }
    }
    num = 0;
    for (j = 0; j < strlen (a[n - 1]); j++) {
        if ((a[n - 1][j] >= 'A' && a[n - 1][j] <= 'Z') || (a[n - 1][j] >= 'a' && a[n - 1][j] <= 'z') || a[n - 1][j] == '_' || (a[n - 1][j] >= '0' && a[n - 1][j] <= '9'))
            num++;
        else {
            cout << "0";
            break;
        }
        if (num == strlen (a[n - 1])) {
            if ((a[n - 1][0] >= 'A' && a[n - 1][0] <= 'Z') || (a[n - 1][0] >= 'a' && a[n - 1][0] <= 'z') || a[n - 1][0] == '_')
                cout << "1" << endl;
            else {
                cout << "0" << endl;
                break;
            }
        }
    }
    return 0;
}

