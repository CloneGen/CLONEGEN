int a [1111];
char s [1111];
int i, n = 0;

int main () {
    cin >> s;
    char b [2];
    b[0] = s[0];
    for (i = 0; s[i]; ++i)
        if (s[i] == b[0])
            a[++n] = i;
        else
            cout << a[n--] << " " << i << endl;
    return 0;
}

