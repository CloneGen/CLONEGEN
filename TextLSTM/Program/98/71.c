int main () {
    int n = 0, sum = 0, length = 0;
    char *p = NULL;
    char istring [30];
    cin >> n;
    p = istring;
    memset (istring, '\0', sizeof (istring));
    cin >> istring;
    cout << istring;
    sum = strlen (istring);
    for (int i = 0;
    i < n - 1; i++) {
        memset (istring, '\0', sizeof (istring));
        cin >> istring;
        length = strlen (istring);
        if (sum + length + 1 > 80) {
            cout << endl;
            sum = length;
            cout << istring;
        }
        else {
            sum = sum + length + 1;
            cout << " " << istring;
        }
    }
    return 0;
}

