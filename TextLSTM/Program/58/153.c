int main () {
    int n, i, j, k, len;
    char str [100] [81];
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++) {
        cin.getline (str[i], 81);
    }
    for (j = 0; j < n; j++) {
        len = strlen (str[j]);
        if ((str[j][0] >= 'a' && str[j][0] <= 'z') || (str[j][0] == '_') || (str[j][0] >= 'A' && str[j][0] <= 'Z')) {
            for (k = 1; k < len; k++) {
                if ((str[j][k] >= 'a' && str[j][k] <= 'z') || (str[j][k] >= 'A' && str[j][k] <= 'Z') || (str[j][k] >= '0' && str[j][k] <= '9') || (str[j][k] == '_'))
                    ;
                else
                    break;
            }
            if (k == len)
                cout << '1' << endl;
            else
                cout << '0' << endl;
        }
        else
            cout << '0' << endl;
    }
    return 0;
}

