int main () {
    int Len;
    char Text [1000], temp;
    cin.getline (Text, 1000);
    Len = strlen (Text);
    temp = Text[0];
    for (int i = 0;
    i < Len -1; i++)
        Text[i] += Text[i + 1];
    Text[Len -1] += temp;
    cout << Text << endl;
    return 0;
}

