int main () {
    char sym [100] [100], temp;
    int k [100], i, j, n, len [100];
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++) {
        cin.getline (sym[i], 100);
        len[i] = strlen (sym[i]);
        if ((sym[i][0] >= 'A' && sym[i][0] <= 'Z') || (sym[i][0] >= 'a' && sym[i][0] <= 'z') || (sym[i][0] == '_')) {
            k[i] = 1;
            for (j = 1; j < len[i]; j++) {
                temp = sym[i][j];
                if (!((temp >= 'A' && temp <= 'Z') || (temp >= 'a' && temp <= 'z') || (temp == '_') || (temp >= '0' && temp <= '9'))) {
                    k[i] = 0;
                    break;
                }
            }
        }
        else
            k[i] = 0;
    }
    for (i = 0; i < n; i++) {
        cout << k[i] << endl;
    }
    return 0;
}

