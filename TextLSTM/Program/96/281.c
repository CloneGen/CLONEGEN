int main () {
    char a [100] = {'\0'}, b [100] = {'\0'};
    cin.getline (a, 100);
    int r, i;
    r = 0;
    for (i = 0; a[i] != '\0'; i++) {
        b[i] = ((r * 10 + (a[i] - '0')) / 13) + '0';
        r = (r * 10 + (a[i] - '0')) % 13;
    }
    if (a[1] == '\0' || ((a[0] - '0') == 1 && ((a[1] - '0') < 3) && (a[2] == '\0')))
        cout << '0';
    else if ((b[1] - '0') != 0) {
        for (i = 1; b[i] != '\0'; i++)
            cout << b[i];
    }
    else {
        for (i = 2; b[i] != '\0'; i++)
            cout << b[i];
    }
    cout << endl << r;
    return 0;
}

