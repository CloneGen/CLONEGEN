int main () {
    char sentence [50];
    char a;
    int i = 0;
    char *p = NULL;
    while ((a = getchar ()) != '\n') {
        sentence[i] = a;
        i++;
    }
    p = sentence;
    while (p < sentence + i) {
        if (*p != ' ') {
            cout << *p;
            p++;
        }
        else {
            cout << *p;
            while (*p == ' ') {
                p++;
            }
        }
    }
    cout << endl;
    return 0;
}

