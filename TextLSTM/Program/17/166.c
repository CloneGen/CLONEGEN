char a [150];
int l, j;

void left (int i) {
    int jj;
    if (i == l - 1) {
        a[i] = '$';
        return;
    }
    for (jj = i + 1; jj < l; jj++) {
        if (a[jj] == ')') {
            a[jj] = ' ';
            a[i] = ' ';
            break;
        }
        else if (a[jj] == '(') {
            left (jj);
        }
    }
    if (jj == l) {
        a[i] = '$';
    }
    return;
}

void match (int i) {
    if (i == l) {
        for (int ii = 0;
        ii < l; ii++) {
            if (a[ii] == '(') {
                a[ii] = '$';
            }
            if (a[ii] == ')') {
                a[ii] = '?';
            }
        }
        return;
    }
    else {
        if (i == l - 1 && a[i] == '(') {
            a[i] = '$';
        }
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            a[i] = ' ';
        }
        else if (a[i] == '(') {
            left (i);
        }
        match (i + 1);
    }
}

int main () {
    while (cin >> a) {
        l = strlen (a);
        for (int k = 0;
        k < l; k++)
            cout << a[k];
        cout << endl;
        match (0);
        for (int k = 0;
        k < l; k++)
            cout << a[k];
        cout << endl;
    }
    return 0;
}

