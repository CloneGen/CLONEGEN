int main () {
    char str [100];
    int i, j, m = 1;
    cin.getline (str, 100);
    for (i = 0; str[i] != '\0';) {
        m = 1;
        if (str[i] == ' ') {
            for (j = 1; str[i + j] == ' '; j++)
                m++;
            cout << str[i];
            i += m;
        }
        else
            cout << str[i++];
    }
    return 0;
}

