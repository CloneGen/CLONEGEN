int main () {
    char word [100];
    int i = 0, time = 0;
    cin.getline (word, 100);
    for (i = 0; i < 100; i++) {
        if (word[i] == '\0')
            break;
        if (word[i] != ' ') {
            cout << word[i];
            time = 1;
        }
        if (word[i] == ' ' && time == 1) {
            cout << " ";
            time++;
        }
    }
    return 0;
}

