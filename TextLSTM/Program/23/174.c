int main () {
    int i = 0;
    char word [50] [50];
    while (cin >> word[i])
        i++;
    int j;
    j = i - 1;
    cout << word[j];
    j--;
    while (j >= 0) {
        cout << " " << word[j];
        j--;
    }
    return 0;
}

