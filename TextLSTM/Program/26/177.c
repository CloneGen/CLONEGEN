int main () {
    char str1 [100], str2 [100] = {'\0'}, str3 [2];
    int i;
    cin.getline (str1, 100);
    for (i = 0; i < strlen (str1); i++) {
        if (str1[i] != ' ' || str1[i] == ' ' && str1[i + 1] != ' ') {
            str3[0] = str1[i];
            str3[1] = '\0';
            strcat (str2, str3);
        }
    }
    cout << str2;
    return 0;
}

