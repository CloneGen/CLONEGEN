int main () {
    char a [40];
    int counter = 0, n;
    cin >> n;
    while (cin >> a && n > 0) {
        if (counter == 0) {
            counter = counter + strlen (a);
            cout << a;
        }
        else {
            if (counter + strlen (a) + 1 <= 80) {
                counter += strlen (a) + 1;
                cout << " " << a;
            }
            else {
                counter = strlen (a);
                cout << endl << a;
            }
        }
        n--;
    }
    return 0;
}

