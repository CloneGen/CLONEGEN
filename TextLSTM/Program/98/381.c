int main () {
    char n [10];
    cin.getline (n, 10);
    char word [10000];
    cin.getline (word, 10000);
    int i, j, t = 1;
    while (t == 1) {
        for (i = 0; i < 10000; i++) {
            if (word[i] == '\0')
                break;
        }
        if (i < 80) {
            cout << word << endl;
            t = 0;
            break;
        }
        else {
            for (i = 80; i > 40; i--) {
                if (word[i] == ' ')
                    break;
            }
            for (j = 0; j < i; j++) {
                cout << word[j];
            }
            cout << endl;
            for (j = i + 1; j < 10000; j++) {
                word[j - i - 1] = word[j];
            }
        }
    }
    return 0;
}

