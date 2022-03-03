int main (int argc, const  char *argv []) {
    char a [1000];
    char b [1000];
    cin.getline (a, 999);
    int i = 0;
    while (*(a + i + 1) != '\0') {
        *(b + i) = *(a + i) + *(a + i + 1);
        i++;
    }
    *(b + i) = *(a + i) + *a;
    *(b + i + 1) = '\0';
    cout << b;
    return 0;
}

