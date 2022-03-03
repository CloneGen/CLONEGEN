int main () {
    char str1 [100], str2 [100];
    cin.getline (str1, 100);
    int k = 0;
    int flag = 0;
    for (int i = 0;
    str1[i] != '\0'; i++) {
        if ((str1[i] == ' ') && (flag == 0)) {
            flag = 1;
            str2[k] = str1[i];
            k++;
        }
        if (str1[i] != ' ') {
            flag = 0;
            str2[k] = str1[i];
            k++;
        }
    }
    for (int j = 0;
    j < k; j++)
        cout << str2[j];
    return 0;
}

