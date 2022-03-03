char sign1, sign2;

void go_out (char line [], int len) {
    int temp;
    for (int i = 0;
    i < len - 1; i++)
        if (line[i] == sign1) {
            temp = i + 1;
            while (line[temp] == '@') {
                temp++;
            }
            if (line[temp] == sign2) {
                cout << i << ' ' << temp << endl;
                line[temp] = line[i] = '@';
                return;
            }
        }
    return;
}

int main () {
    char line [1000];
    int len;
    cin.getline (line, 1000);
    sign1 = line[0];
    int temp = 1;
    while (line[temp] == sign1)
        temp++;
    sign2 = line[temp];
    len = sizeof (line);
    while (line[0] == sign1) {
        go_out (line, len);
    }
    return 0;
}

