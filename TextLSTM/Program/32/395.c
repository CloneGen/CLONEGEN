int main () {
    int n = 0;
    char num1 [102];
    char num2 [102];
    int i = 0;
    int t = 0;
    int k = 0;
    int m = 0;
    int g = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin.ignore ();
        memset (num1, '0', 102);
        memset (num2, '0', 102);
        cin.getline (num1, 102);
        cin.getline (num2, 102);
        t = strlen (num1);
        k = strlen (num2);
        t = t - 1;
        g = t;
        for (k = k - 1; k >= 0; k--) {
            if (num1[t] >= num2[k])
                num1[t] = num1[t] - num2[k] + '0';
            else {
                num1[t] = 10 + num1[t] - num2[k] + '0';
                num1[t - 1]--;
            }
            t--;
        }
        for (m = 0; m <= g; m++) {
            if (num1[m] != 0) {
                for (t = m; t <= g; t++)
                    cout << num1[t];
                cout << endl;
                break;
            }
        }
    }
    return 0;
}

