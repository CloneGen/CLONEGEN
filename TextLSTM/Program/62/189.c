int main () {
    char a, s [100] [100];
    int n = 0, i = 1, j = 1, remj [100], remi, out = 0, count = 1;
    while (cin.get (a) && a != '\n') {
        if (a != ' ') {
            count = 1;
            s[i][j] = a;
            j++;
        }
        else if (a == ' ') {
            if (count == 1) {
                remj[i] = j - 1;
                j = 0;
                i++;
                s[i][j] = a;
                j++;
            }
            count++;
        }
    }
    remj[i] = j - 1;
    remi = i;
    for (i = 1; i < remi; i++)
        for (j = 1; j <= remj[i]; j++) {
            cout << s[i][j];
            out++;
            if (out == remj[i]) {
                cout << ' ';
                out = 0;
            }
        }
    for (j = 1; j <= remj[remi]; j++)
        cout << s[remi][j];
    return 0;
}

