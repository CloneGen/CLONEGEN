int main () {
    char sen [length], *p = sen;
    int counter = 0;
    gets (sen);
    while (*p != '\0') {
        if (*p != ' ') {
            cout << *p;
            counter = 0;
        }
        else if (counter == 0) {
            counter++;
            cout << *p;
        }
        p++;
    }
    cout << endl;
    return 0;
}

