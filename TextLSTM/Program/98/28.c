int main () {
    char c [41];
    char *p = c;
    int n;
    cin >> n;
    int i;
    int j;
    int num = 0;
    for (i = 1; i <= n; i++) {
        cin >> c;
        for (j = 0; *p != 0; p++, j++)
            ;
        if (num == 0) {
            cout << c;
            num = j;
        }
        else {
            if ((num + j + 1) > 80) {
                cout << endl << c;
                num = j;
            }
            else {
                cout << ' ' << c;
                num += (j + 1);
            }
        }
        p = c;
    }
}

