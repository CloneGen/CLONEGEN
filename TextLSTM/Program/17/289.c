char a [150];
int len, num = 0;

int f1 (int n) {
    if (n == len - 1) {
        if (a[n] == '(') {
            num++;
        }
        else if (a[n] == ')') {
            num--;
        }
        return num;
    }
    if (a[n] == '(') {
        num++;
        return f1 (n + 1);
    }
    if (a[n] == ')') {
        num--;
        if (num == 0)
            return 0;
        else
            return f1 (n + 1);
    }
    else
        return f1 (n + 1);
}

int f2 (int n) {
    if (n == 0) {
        if (a[n] == '(') {
            num++;
        }
        else if (a[n] == ')') {
            num--;
        }
        return num;
    }
    if (a[n] == '(') {
        num++;
        if (num == 0)
            return 0;
        else
            return f2 (n - 1);
    }
    if (a[n] == ')') {
        num--;
        return f2 (n - 1);
    }
    else
        return f2 (n - 1);
}

int main () {
    while (cin >> a) {
        len = strlen (a);
        cout << a << endl;
        for (int i = 0;
        i < len; i++) {
            if (a[i] != '(' && a[i] != ')')
                cout << ' ';
            else if (a[i] == '(') {
                num = 0;
                if (f1 (i) > 0)
                    cout << '$';
                else
                    cout << ' ';
            }
            else {
                num = 0;
                if (f2 (i) < 0)
                    cout << '?';
                else
                    cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

