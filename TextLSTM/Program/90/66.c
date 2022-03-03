int m, n, k = 0;
int emptyOverone (int apple, int plate);

int AllFull (int apple, int plate) {
    if (apple < plate)
        return 0;
    if (plate == apple)
        return 1;
    return AllFull (apple - plate, plate) + emptyOverone (apple - plate, plate);
}

int emptyOverone (int apple, int plate) {
    if (plate == 1)
        return 0;
    return AllFull (apple, plate - 1) + emptyOverone (apple, plate - 1);
}

int main () {
    int zushu = 0;
    cin >> zushu;
    int shuchu = 0;
    while (zushu > 0) {
        cin >> m >> n;
        shuchu += emptyOverone (m, n) + AllFull (m, n);
        cout << shuchu << endl;
        zushu--;
        shuchu = 0;
    }
    return 0;
}

