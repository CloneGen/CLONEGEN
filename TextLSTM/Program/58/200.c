int main () {
    char a [500] = {'\0'};
    int n = 0, i = 0, j = 0, m = 0, count = 0;
    cin >> n;
    cin.getline (a, 500);
    for (j = 0; j < n; j++) {
        count = 0;
        cin.getline (a, 500);
        m = strlen (a);
        if (a[0] == 95 || (a[0] >= 97 && a[0] <= 123) || (a[0] >= 65 && a[0] <= 91))
            count += 1;
        for (i = 0; i < m; i++) {
            if (a[i] == 95 || (a[i] >= 97 && a[i] <= 123) || (a[i] >= 65 && a[i] <= 91) || (a[i] >= 48 && a[i] <= 57))
                count += 1;
        }
        if (count == m + 1)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}

