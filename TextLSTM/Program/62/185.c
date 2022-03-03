int main () {
    char c;
    cin.get (c);
    while (c != '\n') {
        if (c != ' ')
            cout << c;
        else {
            cout << c;
            while (c == ' ') {
                cin.get (c);
            }
            cout << c;
        }
        cin.get (c);
    }
    return 0;
}

