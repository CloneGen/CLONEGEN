int main () {
    char str1 [100];
    cin.getline (str1, 100);
    for (int i = 1;
    i < 100; i++) {
        if (str1[i - 1] == ' ' && str1[i] == ' ') {
            for (int j = i + 1;
            j < 100; j++) {
                str1[j - 1] = str1[j];
            }
            i--;
        }
    }
    cout << str1 << endl;
    return 0;
}

