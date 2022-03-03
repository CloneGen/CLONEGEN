int main () {
    char str [100] [100];
    int n, i, j, num;
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++)
        cin.getline (str[i], 100);
    for (i = 0; i < n; i++) {
        num = 0;
        for (j = 0; j < strlen (str[i]); j++) {
            if ((str[i][j] >= '0' && str[i][j] <= '9') || (str[i][j] >= 65 && str[i][j] <= 90) || (str[i][j] >= 97 && str[i][j] <= 122) || str[i][j] == '_')
                num++;
            else {
                cout << 0 << endl;
                break;
            }
        }
        if (num == strlen (str[i])) {
            if (str[i][0] == '_' || (str[i][0] >= 65 && str[i][0] <= 90) || (str[i][0] >= 97 && str[i][0] <= 122)) {
                cout << 1 << endl;
                continue;
            }
            else {
                cout << 0 << endl;
                continue;
            }
        }
    }
    return 0;
}

