int main () {
    char c;
    int f = 1;
    while ((c = getchar ()) != EOF) {
        if (c != ' ') {
            cout << c;
            f = 1;
        }
        else if (f) {
            cout << c;
            f = 0;
        }
    }
    return 0;
}

