int l, js = 0;
char a, b;

void search (char c []) {
    int i, j;
    for (i = 0; i <= l - 1; i++)
        if (c[i] == b)
            break;
    for (j = i - 1; j >= 0; j--)
        if (c[j] == a) {
            c[i] = 'Z';
            c[j] = 'Z';
            cout << j << ' ' << i << endl;
            js += 2;
            if (js == l)
                return;
            else
                search (c);
        }
}

int main () {
    int i;
    char s [201];
    cin >> s;
    l = strlen (s);
    a = s[0];
    for (i = 1; i <= l - 1; i++)
        if (s[i] != a) {
            b = s[i];
            break;
        }
    search (s);
    return 0;
}

