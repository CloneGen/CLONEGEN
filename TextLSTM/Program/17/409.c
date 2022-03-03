char a [150];

int find (int x, int y) {
    int b;
    if (a[x] == '\0')
        return -1;
    if (a[x] == '(') {
        b = find (x + 1, y + 1);
        a[x] = (b == -1) ? '$' : ' ';
        return (b == -1) ? -1 : find (b + 1, y);
    }
    if (a[x] == ')') {
        a[x] = (y == 0) ? '?' : ' ';
        return (y == 0) ? find (x + 1, y) : x;
    }
    else {
        a[x] = ' ';
        return find (x + 1, y);
    }
}

int main () {
    int n = 1000;
    for (int i = 1;
    i < n; i++) {
        cin.getline (a, 150);
        if (a[0] == '\0')
            break;
        else {
            cout << a << endl;
            find (0, 0);
            cout << a << endl;
        }
    }
    return 0;
}

