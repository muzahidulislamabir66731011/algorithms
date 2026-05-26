int find_value(char letter);

int romanToInt(char* s) 
{
    int length = strlen(s);
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        int value1 = find_value(s[i]);
        int value2 = (i + 1 < length) ? find_value(s[i + 1]) : 0;

        if (value1 < value2)
        {
            sum -= value1;
        }
        else
        {
            sum += value1;
        }
    }

    return sum;
}

int find_value(char letter)
{
    switch(letter)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
