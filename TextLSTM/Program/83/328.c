int main () {
    int n1;
    cin >> n1;
    const  int n = n1;
    int number [n], grade [n];
    float gpa [n], sum = 0, sum1 = 0, average = 0;
    int i;
    for (i = 0; i <= n - 1; i++) {
        cin >> number[i];
    }
    for (i = 0; i <= n - 1; i++) {
        cin >> grade[i];
    }
    for (i = 0; i <= n - 1; i++) {
        if ((90 <= grade[i]) && (grade[i] <= 100))
            gpa[i] = 4.0;
        if ((85 <= grade[i]) && (grade[i] <= 89))
            gpa[i] = 3.7;
        if ((82 <= grade[i]) && (grade[i] <= 84))
            gpa[i] = 3.3;
        if ((78 <= grade[i]) && (grade[i] <= 81))
            gpa[i] = 3.0;
        if ((75 <= grade[i]) && (grade[i] <= 77))
            gpa[i] = 2.7;
        if ((72 <= grade[i]) && (grade[i] <= 74))
            gpa[i] = 2.3;
        if ((68 <= grade[i]) && (grade[i] <= 71))
            gpa[i] = 2.0;
        if ((64 <= grade[i]) && (grade[i] <= 67))
            gpa[i] = 1.5;
        if ((60 <= grade[i]) && (grade[i] <= 63))
            gpa[i] = 1.0;
        if (grade[i] < 60)
            gpa[i] = 0;
    }
    for (i = 0; i <= n - 1; i++) {
        sum = sum + gpa[i] * number[i];
        sum1 = sum1 + number[i];
    }
    average = sum / sum1;
    printf ("%.2f", average);
    return 0;
}

