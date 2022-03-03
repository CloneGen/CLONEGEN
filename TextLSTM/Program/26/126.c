int main () {
    char a [100];
    int b, i;
    char *p;
    cin.getline (a, 100);
    p = a;
    b = strlen (a);
    for (; p < a + b;) {
        if (*p == ' ') {
            p++;
            if (*p != ' ') {
                cout << " " << *p;
                p++;
            }
        }
        else {
            cout << *p;
            p++;
        }
    }
    return 0;
}

