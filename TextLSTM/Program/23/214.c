int main () {
    char ipt [110];
    cin.getline (ipt, 110);
    char w [100] [50];
    memset (w, 0, sizeof (w));
    int stofwd = 0, nbofwd = 0;
    for (int i = 0;
    ipt[i] != 0; i++) {
        if (ipt[i] != ' ') {
            w[nbofwd][i - stofwd] = ipt[i];
        }
        if (ipt[i] == ' ') {
            nbofwd++;
            stofwd = i + 1;
        }
    }
    for (int j = 0;
    w[nbofwd][j] != 0; j++)
        cout << w[nbofwd][j];
    for (int i = 1;
    i <= nbofwd; i++) {
        cout << ' ';
        for (int j = 0;
        w[nbofwd - i][j] != 0; j++) {
            cout << w[nbofwd - i][j];
        }
    }
    return 0;
}

