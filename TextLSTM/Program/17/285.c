char str [103], temp [103];
int len;

int match (int x) {
    int y;
    if (x == len)
        return x;
    if (str[x] == '(')
        y = match (x + 1);
    else if (str[x] == ')')
        return x;
    else
        return match (x + 1);
    if (y == len) {
        temp[x] = '$';
        return y;
    }
    else
        return match (y + 1);
}

int main () {
    while (cin >> str) {
        cout << str << endl;
        len = strlen (str);
        int z = 0;
        memset (temp, ' ', sizeof (temp));
        while (z != len) {
            z = match (z);
            if (z != len) {
                temp[z] = '?';
                z++;
            }
        }
        for (int i = 0;
        i < len; i++)
            cout << temp[i];
        cout << endl;
    }
    return 0;
}

