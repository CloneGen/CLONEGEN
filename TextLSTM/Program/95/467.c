int main () {
    char str1 [80], str2 [80];
    int i, j, length;
    cin.getline (str1, 80);
    cin.getline (str2, 80);
    length = strlen (str1);
    for (i = 0; i < length; i++)
        str1[i] = (char) toupper (str1[i]);
    for (i = 0; i < length; i++)
        str2[i] = (char) toupper (str2[i]);
    for (i = 0; i <= length; i++) {
        if (str1[i] > str2[i]) {
            cout << '>' << endl;
            break;
        }
        else if (str1[i] < str2[i]) {
            cout << '<' << endl;
            break;
        }
        else if (i == length)
            cout << '=' << endl;
    }
    return 0;
}

