int main () {
    char sentence [101], *p1, *p2, *k;
    int l;
    cin.getline (sentence, 101);
    for (p1 = sentence; *p1 != '\0'; p1++) {
        if (*p1 == ' ') {
            k = p1 + 1;
            for (p2 = k; *p2 != '\0'; p2++) {
                if (*p2 != ' ') {
                    l = strlen (sentence) - (p2 - sentence) + 1;
                    memcpy (k, p2, l);
                    break;
                }
            }
        }
    }
    cout << sentence << endl;
    return 0;
}

