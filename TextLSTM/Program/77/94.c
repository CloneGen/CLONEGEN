char str [110];
int len;
int px (int xb, char b, char g);

int main () {
    char boy, girl;
    cin >> str;
    len = strlen (str);
    boy = str[0];
    girl = str[len - 1];
    px (0, boy, girl);
    return 0;
}

int px (int xb, char b, char g) {
    int i, k;
    for (i = xb; i <= len - 1; i++) {
        while (str[xb] == '*')
            xb++;
        if (str[xb] == b) {
            str[xb] = '*';
            k = px (xb + 1, b, g);
            cout << xb << " " << k << endl;
        }
        else {
            if (str[xb] == g) {
                str[xb] = '*';
                return xb;
            }
        }
    }
}

