int main () {
    char a [100000];
    char b [27] = {"abcdefghijklmnopqrstuvwxyz"};
    int c [100000];
    int i, j, x, y = 0, min, t, k, first = 1, count = 0;
    cin >> t;
    for (k = 1; k <= t; k++) {
        for (i = 0; i <= 99999; i++)
            c[i] = 100000;
        y = 0;
        if (first == 1) {
            cin.get ();
            first = 0;
        }
        cin.getline (a, 100000);
        for (i = 0; b[i] != '\0'; i++) {
            count = 0;
            for (j = 0; a[j] != '\0'; j++) {
                if (b[i] == a[j]) {
                    x = j;
                    count++;
                }
            }
            if (count == 1) {
                c[y] = x;
                y++;
            }
        }
        if (c[0] == 100000) {
            cout << "no" << endl;
        }
        else {
            min = c[0];
            for (i = 1; i <= 99999; i++) {
                if (min > c[i]) {
                    min = c[i];
                }
            }
            cout << a[min] << endl;
        }
    }
    return 0;
}

