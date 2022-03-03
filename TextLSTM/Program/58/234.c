int main () {
    int n, i, j;
    char a [101] [256];
    cin >> n;
    for (i = 0; i <= n; i++) {
        cin.getline (a[i], 256);
    }
    for (i = 1; i <= n; i++) {
        int k;
        k = strlen (a[i]);
        if ((a[i][0] >= 'A' && a[i][0] <= 'Z') || (a[i][0] >= 'a' && a[i][0] <= 'z') || a[i][0] == '_') {
            int m = 0;
            for (j = 1; j < k; j++) {
                if ((a[i][j] >= 'A' && a[i][j] <= 'Z') || (a[i][j] >= 'a' && a[i][j] <= 'z') || a[i][j] == '_' || (a[i][j] >= '0' && a[i][j] <= '9'))
                    m++;
                else {
                    cout << '0' << endl;
                    break;
                }
            }
            if (m == k - 1)
                cout << '1' << endl;
        }
        else
            cout << '0' << endl;
    }
    return 0;
}

