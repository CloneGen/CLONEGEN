int main () {
    int number = 0;
    char string1 [50], string2 [50];
    int length1 = 0, length2 = 0, length3 = 0;
    int k = 0, m = 0, n = 0;
    cin >> number;
    gets (string1);
    cin >> string1;
    k = 1;
    cout << string1;
    length1 = strlen (string1);
    while (k < number) {
        cin >> string2;
        length2 = strlen (string2);
        length1 = length1 + length2 + 1;
        if (length1 <= 80)
            cout << " " << string2;
        else if (length1 > 80) {
            cout << endl;
            cout << string2;
            strcpy (string1, string2);
            length1 = strlen (string1);
        }
        k++;
    }
    return 0;
}

