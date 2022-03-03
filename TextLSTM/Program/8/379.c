void rank1 (int array [], int num, int k) {
    int a, i, j;
    for (i = 1; i < num; i++)
        for (j = 1; j <= num - i; j++)
            if (array[j] > array[j + 1]) {
                a = array[j];
                array[j] = array[j + 1];
                array[j + 1] = a;
            }
    for (i = 1; i <= num; i++) {
        if (i == 1) {
            if (k == 2)
                cout << ' ';
            cout << array[1];
        }
        else
            cout << ' ' << array[i];
    }
}

void rank2 (int num1, int num2) {
    int array1 [10000], array2 [10000], i;
    for (i = 1; i <= num1; i++)
        cin >> array1[i];
    for (i = 1; i <= num2; i++)
        cin >> array2[i];
    rank1 (array1, num1, 1);
    rank1 (array2, num2, 2);
    cout << endl;
}

int main () {
    int num1, num2;
    cin >> num1 >> num2;
    rank2 (num1, num2);
    return 0;
}

