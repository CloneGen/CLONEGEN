void del (char str [100]) {
    int i, j, count;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            count = 0;
            for (j = i + 1; str[j + 1] != '\0'; j++) {
                str[j] = str[j + 1];
                count++;
            }
            str[i + 1 + count] = '\0';
            i--;
        }
    }
    cout << str;
}

int main () {
    char str [100];
    cin.getline (str, 100);
    del (str);
    return 0;
}

