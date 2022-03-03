int main () {
    char string [1005], temp;
    cin.getline (string, 1005);
    int i, length = strlen (string), count = 0;
    for (i = 0; i < length; i++)
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] += ('A' - 'a');
    for (i = 0; i < length;) {
        count = 1;
        temp = string[i];
        i++;
        while (string[i] == string[i - 1]) {
            if (i == length)
                break;
            count++;
            i++;
        }
        cout << '(' << temp << ',' << count << ')';
    }
    return 0;
}

