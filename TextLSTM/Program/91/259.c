int main () {
    char string [101], final [101];
    cin.getline (string, 101);
    char *init, *result;
    result = final;
    int length = strlen (string);
    for (init = string; init < (string + length - 1); init++, result++) {
        *result = *(init)+*(init + 1);
    }
    *result = *init + *(init - length + 1);
    for (int i = 0;
    i < length; i++) {
        cout << final[i];
    }
    return 0;
}

