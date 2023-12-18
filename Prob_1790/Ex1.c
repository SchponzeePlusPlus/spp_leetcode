bool areAlmostEqual(char* s1, char* s2)
{
    bool result = false;
    int str_length = 0;
    int i = 0;
    int j = 0;
    char s1_char_temp = "";
    char s2_char_temp = "";
    char* s1_temp = s1;
    char* s2_temp = s2;

    // Check strings are equal
    if (len(s1) == len(s2))
    {
        str_length = len(s1);
        for (i = 0; i < str_length; i++)
        {
            s1
            s1_char_temp = s1[i];
            for (j = 0; j < str_length; j++)
            {
                s2_char_temp = s2[j];
                if (s1_temp == s2_temp)
                {
                    result = true;
                }
            }
        }
    }
    else
    {
        result = false;
    }
    return result;
}