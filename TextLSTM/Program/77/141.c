char b, g;
char str [110];
int match (int p);

int main () {
    int i, j, len;
    cin >> str;
    len = strlen (str);
    b = str[0];
    g = str[len - 1];
    match (0);
    return 0;
}

int match (int p) {
    int q;
    if (str[p] == b) {
        q = match (p + 1);
        cout << p << " " << q << endl;
        return match (q + 1);
    }
    else {
        return p;
    }
}

