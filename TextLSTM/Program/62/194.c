int main () {
    char c, last = 0;
    cin.get (c);
    while (c != '\n') {
        if (!((c == ' ') && (last == ' '))) {
            cout << c;
        }
        last = c;
        cin.get (c);
    }
    return 0;
}

