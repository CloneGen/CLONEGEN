int main () {
    int n, i, j, count = 0, count1 = 0;
    char *p = NULL;
    cin >> n;
    char str [1000] [40];
    for (i = 0; i < n; i++)
        cin >> str[i];
    p = &str[0][0];
    for (i = 0; i < n; i++) {
        p = &str[i][0];
        for (j = 0; j < 40; j++) {
            if (*p != '\0') {
                count++;
                p++;
            }
            else
                break;
        }
        count++;
        if (count - 1 <= 80) {
            if (count1 == 0) {
                cout << str[i];
                count1 = 1;
            }
            else
                cout << " " << str[i];
        }
        if (count - 1 > 80) {
            i--;
            cout << endl;
            count = 0;
            count1 = 0;
        }
    }
    cout << endl;
}

