char kid [100];

int paidui (int n, char b, char g) {
    for (int i = n;
    kid[i] != '\0'; i++) {
        while (kid[n] == '^')
            n++;
        if (kid[n] == b) {
            kid[n] = '^';
            int k = paidui (n + 1, b, g);
            cout << n << " " << k << endl;
        }
        else {
            kid[n] = '^';
            return n;
        }
    }
}

int main () {
    char girl, boy;
    int n;
    cin >> kid;
    boy = kid[0];
    n = strlen (kid);
    girl = kid[n - 1];
    paidui (0, boy, girl);
    return 0;
}

