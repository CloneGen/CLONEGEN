int main () {
    int n;
    cin >> n;
    char a [10000];
    cin.getline (a, 10000);
    cin.getline (a, 10000);
    char *p = NULL, *q = NULL;
    p = a;
    q = p + 80;
    while (*q != 0) {
        while (*q != ' ') {
            q--;
        }
        *q = 0;
        cout << p << endl;
        p = q + 1;
        q = p + 80;
    }
    cout << p << endl;
    return 0;
}

