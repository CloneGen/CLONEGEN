int main () {
    char b;
    int i;
    while (1) {
        b = getchar ();
        if (b == '\n') {
            break;
        }
        else if (b == ' ') {
            cout << ' ';
            while (1) {
                b = getchar ();
                if (b != ' ') {
                    cout << b;
                    break;
                }
            }
        }
        else {
            cout << b;
        }
    }
    cout << endl;
    return 0;
}

