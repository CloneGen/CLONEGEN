int main () {
    char sentence [100];
    int i, len;
    cin.getline (sentence, 100);
    len = strlen (sentence);
    for (i = 0; i <= len - 2; i++) {
        if (sentence[i] == ' ' && sentence[i + 1] == ' ')
            continue;
        else
            cout << sentence[i];
    }
    cout << sentence[len - 1] << endl;
    return 0;
}

