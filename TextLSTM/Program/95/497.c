int main () {
    char a [80], b [80];
    int m = 0;
    for (int i = 0;
    i < 80; i++) {
        a[i] = '\0';
        b[i] = '\0';
    }
    cin.getline (a, 80, '\n');
    cin.getline (b, 80, '\n');
    for (int i = 0;
    i < 80; i++) {
        if (a[i] > 90)
            a[i] = a[i] - 32;
    }
    for (int i = 0;
    i < 80; i++) {
        if (b[i] > 90)
            b[i] = b[i] - 32;
    }
    for (int i = 0;
    i < 80; i++) {
        if ((a[i] - b[i]) != 32 && (b[i] - a[i]) != 32 && (a[i] - b[i] != 0)) {
            if (a[i] < b[i]) {
                cout << "<" << endl;
                m = m + 1;
            }
            else if (a[i] > b[i]) {
                cout << ">" << endl;
                m = m + 1;
            }
        }
        if (m == 1)
            break;
    }
    if (m == 0)
        cout << "=" << endl;
    return 0;
}

