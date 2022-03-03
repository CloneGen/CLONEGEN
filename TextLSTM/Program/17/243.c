char s [100];
char a [100];
int b [100];
int num = 0;
int i, j;

void f () {
    for (i = 0; i < strlen (s); i++) {
        a[i] = ' ';
    }
    for (i = 0; i < strlen (s); i++) {
        if (s[i] == '(') {
            b[num] = i;
            a[i] = '$';
            num++;
        }
        else if (s[i] == ')' && num > 0) {
            num--;
            a[b[num]] = ' ';
        }
        else if (s[i] == ')' && num <= 0)
            a[i] = '?';
    }
    for (i = 0; i < strlen (s); i++) {
        cout << a[i];
    }
    cout << endl;
}

int main () {
    while (cin >> s) {
        num = 0;
        cout << s << endl;
        f ();
    }
}

