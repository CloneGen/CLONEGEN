int main () {
    int Position = 0;
    int index = 0;
    char StrS [50] = {'\0'}, StrW [50] = {'\0'};
    int flag = 0;
    scanf ("%s", StrS);
    scanf ("%s", StrW);
    while (StrW[Position] != '\0') {
        while (StrS[index] != '\0') {
            if ((flag) &&(StrS[index + 1] == '\0')) {
                printf ("%d", Position);
                return 1;
            }
            if (StrS[index] == StrW[Position +index]) {
                flag = 1;
                index++;
                continue;
            }
            else {
                flag = 0;
                break;
            }
        }
        Position++;
        index = 0;
    }
    return 0;
}

