int main () {
    char str1 [101], str2 [101] = {0};
    int i;
    cin.getline (str1, 101);
    for (i = 0; i < 101; i++) {
        if (str1[i] == '\0')
            break;
        else {
            if (str1[i + 1] == '\0')
                str2[i] = str1[i] + str1[0];
            else
                str2[i] = str1[i] + str1[i + 1];
        }
    }
    cout << str2 << endl;
    return 0;
}

