int main () {
    char essay [10000];
    char *space, *begin, *p, *q;
    int n;
    cin >> n;
    cin.get ();
    cin.getline (essay, 10000);
    begin = essay;
    p = essay;
    for (p = essay; *p != '\0'; p++) {
        if (*p == ' ') {
            if (p - begin > 80) {
                for (q = begin; q < space; q++)
                    cout << *q;
                cout << endl;
                p = p + 1;
                begin = space + 1;
            }
            space = p;
        }
    }
    for (q = begin; *q != '\0'; q++)
        cout << *q;
    cout << endl;
    return 0;
}

