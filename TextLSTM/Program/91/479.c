int main () {
    char s [1000];
    cin.getline (s, 1000);
    int len;
    for (len = 0; s[len] != '\0'; len++)
        ;
    for (int i = 0;
    i < len - 1; i++)
        cout << (char) (s[i] + s[i + 1]);
    cout << (char) (s[len - 1] + s[0]) << endl;
    return 0;
}

