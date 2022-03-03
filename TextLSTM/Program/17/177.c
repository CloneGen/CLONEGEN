char a [200];

int findpair (int i, int j) {
    int temp;
    if (a[i] == '\0')
        return -1;
    else if (a[i] == '(') {
        temp = findpair (i + 1, j + 1);
        if (temp == -1) {
            a[i] = '$';
            return -1;
        }
        else {
            a[i] = ' ';
            return findpair (temp + 1, j);
        }
    }
    else if (a[i] == ')') {
        if (j == 0) {
            a[i] = '?';
            return findpair (i + 1, j);
        }
        else {
            a[i] = ' ';
            return i;
        }
    }
    else if (a[i] == ' ')
        return (findpair (i + 1, j));
}

int main () {
    while (cin >> a) {
        cout << a << endl;
        for (int i = 0;
        i <= (int) strlen (a) - 1; ++i)
            if (a[i] != ')' && a[i] != '(' && a[i] != '\0')
                a[i] = ' ';
        findpair (0, 0);
        cout << a << endl;
    }
    return 0;
}

