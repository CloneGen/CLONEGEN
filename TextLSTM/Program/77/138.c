char queen [1000];
char a, b;
int cnt = 0;
int len;
int match (char *);

int main () {
    cin.getline (queen, 1000);
    len = strlen (queen);
    a = queen[0];
    b = queen[len - 1];
    char *p = queen;
    match (p);
    while (EOF != getchar ())
        ;
    return 0;
}

int match (char *p) {
    int q;
    if (*p == b) {
        return p - queen;
    }
    else {
        q = match (p + 1);
        cout << p - queen << ' ' << q << endl;
        cnt++;
        if (cnt < len / 2) {
            return match (q + queen + 1);
        }
    }
}

