int main () {
    int n = 0;
    char a [10000];
    cin >> n;
    cin.get ();
    cin.get (a, 10000, '\n');
    char *p = a;
    int lenth [100] = {0};
    int *q = lenth;
    int m = 0;
    int flag = 0;
    while (*p != '\0' && flag == 0) {
        int i = 0;
        for (i = 0; i < 80; i++) {
            p++;
            if (*p == '\0') {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            if (*p != ' ')
                for (; *p != ' '; p--)
                    ;
            *p = '\0';
        }
        p = a;
        q = lenth;
        for (int j = 0;
        j < m; j++) {
            for (i = 0; i < *q + 1; i++)
                p++;
            q++;
        }
        for (; *p != '\0'; p++) {
            cout << *p;
            lenth[m]++;
        }
        cout << endl;
        m++;
        q++;
        p++;
    }
    return 0;
}

