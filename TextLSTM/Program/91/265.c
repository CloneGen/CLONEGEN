int main () {
    char cha, a [500], *pointa = NULL;
    pointa = a;
    int len, i;
    cin.getline (a, 500);
    len = strlen (a);
    for (i = 0; i < len - 1; i++) {
        cha = (char) ((int) *(pointa + i) + (int) *(pointa + i + 1));
        cout << cha;
    }
    cha = (char) ((int) *(pointa + len - 1) + (int) *pointa);
    cout << cha << endl;
    return 0;
}

