int main () {
    char a [201], b [201];
    gets (a);
    int flag = 0;
    char *pa = a, *pb = b;
    while (*pa != '\0') {
        if (*pa == ' ') {
            if (flag == 0) {
                *pb = *pa;
                pb++;
                flag = 1;
            }
        }
        else {
            flag = 0;
            *pb = *pa;
            pb++;
        }
        pa++;
    }
    *pb = *pa;
    cout << b << endl;
    return 0;
}

