int main () {
    int a = 0;
    int b = 0;
    int c = 0;
    char temp [3];
    for (a = 0; a < 3; a++)
        for (b = 0; b < 3; b++)
            for (c = 0; c < 3; c++) {
                if ((b > a) + (c == a) == 2 - a && (b < a) + (a > c) == 2 - b && (c > b) + (b > a) == 2 - c) {
                    temp[a] = 'A';
                    temp[b] = 'B';
                    temp[c] = 'C';
                    cout << temp[0] << temp[1] << temp[2];
                }
            }
    return 0;
}

