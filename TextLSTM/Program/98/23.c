int main () {
    int a, n, i = 0, j = 0, k, jishu = 0, cd = 0;
    char w [2000] [50] = {'\0'};
    cin >> n;
    cin.get ();
    do {
        a = cin.get ();
        if (a != ' ' && a != '\n') {
            w[i][j] = a;
            j++;
        }
        else {
            i++;
            j = 0;
            jishu++;
        }
    }
    while (jishu < n);
    for (i = 0; i < n; i++) {
        if (cd + strlen (w[i]) <= 80) {
            if (cd == 0) {
                cout << w[i];
                cd = cd + 1 + strlen (w[i]);
            }
            else {
                cout << " " << w[i];
                cd = cd + 1 + strlen (w[i]);
            }
        }
        else {
            cout << endl;
            cout << w[i];
            cd = strlen (w[i]) + 1;
        }
    }
    return 0;
}

