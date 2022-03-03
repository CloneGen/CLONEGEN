int flag [100000];
char a [100000];

int main () {
    int t, i, j;
    cin >> t;
    cin.ignore ();
    while (t--) {
        memset (flag, 0, 100000);
        cin.getline (a, 100000);
        for (i = 0; a[i] != '\0'; i++)
            if (flag[i] != 1) {
                for (j = i + 1; a[j] != '\0'; j++) {
                    if (a[i] == a[j]) {
                        flag[j] = 1;
                        break;
                    }
                }
                if (a[j] == '\0') {
                    cout << a[i] << endl;
                    break;
                }
            }
        if (a[i] == '\0')
            cout << "no" << endl;
    }
    return 0;
}

