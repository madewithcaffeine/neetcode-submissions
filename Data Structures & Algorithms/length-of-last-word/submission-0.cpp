class Solution{
public:
    int lengthOfLastWord(string s)
    {
        //getting the length of the string
        int n = s.length();

        //getting the last word
        int i = n - 1;

        //skipping through the spaces
        while(i >= 0 && s[i] == ' ')
        {
            i--;
        }


        //count characters
        int length = 0;
        while(i >= 0 && s[i] != ' ')
        {
            i--;
            length++;
        }


        //return the character count
        return length;
    }
};