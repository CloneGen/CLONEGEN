int main () {
    char str1 [81], str2 [81], ans;
    int i;
    cin.getline (str1, 81);
    cin.getline (str2, 81);
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] > 96 && str1[i] < 123)
            str1[i] = str1[i] - 32;
        if (str2[i] > 96 && str2[i] < 123)
            str2[i] = str2[i] - 32;
        if (str1[i] == str2[i])
            ans = '=';
        else if (str1[i] > str2[i]) {
            ans = '>';
            break;
        }
        else {
            ans = '<';
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

