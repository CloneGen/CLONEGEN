int main () {
    char a [8000], blank [100];
    char *ap, *end;
    int n;
    cin >> n;
    cin.getline (blank, 1);
    ap = a;
    cin.getline (a, 8000);
    int lena = strlen (a), i, c;
    for (; lena >= 80;) {
        for (i = 0; i <= 80; i++) {
            if (*(ap + i) == ' ') {
                end = ap + i;
                c = i;
            }
        }
        lena = lena - c - 1;
        for (; ap < end; ap++)
            cout << *ap;
        cout << endl;
        ap++;
    }
    for (int j = 0;
    j < lena; j++)
        cout << *(ap + j);
    return 0;
}

