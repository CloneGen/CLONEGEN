int main () {
    int i, num, length, sumlen = 0;
    char word [41];
    cin >> num;
    for (i = 0; i < num; i++) {
        cin >> word;
        length = strlen (word);
        if (sumlen != 0) {
            sumlen = sumlen + length;
            if (sumlen < 79) {
                cout << " " << word;
                sumlen++;
                continue;
            }
            if ((sumlen == 80) || (sumlen == 79)) {
                cout << " " << word << endl;
                sumlen = 0;
            }
            if (sumlen > 80) {
                cout << endl << word;
                sumlen = length + 1;
                ;
            }
        }
        else {
            cout << word;
            sumlen = length + 1;
        }
    }
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

