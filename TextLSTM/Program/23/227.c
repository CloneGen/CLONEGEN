int main () {
    char a, sen [100] [100];
    int i = 1, j = 1, remi, out = 0, remj [99];
    while (cin.get (a) && a != '\n') {
        if (a != ' ') {
            sen[i][j] = a;
            j++;
        }
        else if (a == ' ') {
            remj[i] = j - 1;
            j = 0;
            i++;
            sen[i][j] = a;
            j++;
        }
    }
    remj[i] = j - 1;
    remi = i;
    for (i = remi; i >= 2; i--)
        for (j = 1; j <= remj[i]; j++) {
            cout << sen[i][j];
            out++;
            if (out == remj[i]) {
                cout << ' ';
                out = 0;
            }
        }
    for (j = 1; j <= remj[1]; j++)
        cout << sen[1][j];
    return 0;
}

