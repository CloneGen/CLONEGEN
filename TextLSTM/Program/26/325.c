int main () {
    char Sentence [100] = {0};
    int i = 0;
    gets (Sentence);
    for (i = 0; i < 100; i++) {
        if (Sentence[i] == ' ') {
            if (Sentence[i + 1] != ' ') {
                cout << ' ';
            }
        }
        if (Sentence[i] == 0) {
            break;
        }
        if (Sentence[i] != ' ') {
            cout << Sentence[i];
        }
    }
    cout << endl;
    return 0;
}

