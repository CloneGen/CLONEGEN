int main () {
    struct  student {
        int StudentNumber;
        int ChineseGrades;
        int MathGrades;
        int Total;
    };
    struct  student Stu [100000], sTemp;
    int n, i, j;
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        cin >> Stu[i].StudentNumber >> Stu[i].ChineseGrades >> Stu[i].MathGrades;
        Stu[i].Total = Stu[i].ChineseGrades + Stu[i].MathGrades;
    }
    for (i = 0; i <= 2; i++) {
        for (j = n - 1; j >= i + 1; j--) {
            if (Stu[j].Total > Stu[j - 1].Total) {
                sTemp = Stu[j];
                Stu[j] = Stu[j - 1];
                Stu[j - 1] = sTemp;
            }
        }
    }
    cout << Stu[0].StudentNumber << " " << Stu[0].Total;
    for (i = 1; i <= 2; i++) {
        cout << endl;
        cout << Stu[i].StudentNumber << " " << Stu[i].Total;
    }
    return 0;
}

