int main () {
    int n = 0;
    char a [100] [100] = {"\0"};
    int b [100] = {0};
    int i = 0, j = 0;
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++) {
        gets (a [i]);
    }
    for (i = 0; i < n; i++) {
        if (a[i][0] == '_' || a[i][0] >= 'a' && a[i][0] <= 'z' || a[i][0] >= 'A' && a[i][0] <= 'Z')
            for (j = 0; a[i][j] != '\0'; j++) {
                if (a[i][j] >= '0' && a[i][j] <= '9' || a[i][j] >= 'A' && a[i][j] <= 'Z' || a[i][j] >= 'a' && a[i][j] <= 'z' || a[i][j] == '_')
                    b[i] = 1;
                else {
                    b[i] = 0;
                    break;
                }
            }
        else {
            b[i] = 0;
            continue;
        }
    }
    for (i = 0; i < n; i++) {
        cout << b[i] << endl;
    }
    return 0;
}

