int main () {
    int n, count = 0;
    for (cin >> n; n > 0; n--) {
        char s [41];
        cin >> s;
        char *p = s;
        int lp = 0;
        for (; *p != '\0'; p++)
            lp++;
        p = s;
        if (count == 0) {
            count = lp;
            cout << p;
        }
        else if (count + lp + 1 <= 80) {
            count += 1 + lp;
            cout << " " << p;
        }
        else {
            cout << endl << p;
            count = lp;
        }
    }
    return 0;
}

