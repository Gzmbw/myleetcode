/*Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.
给定一个罗马数字，将其转化为整数，输入要保证在1到3999.
*/

int romanToInt(char* s) {
    int len=strlen(s);
    int sum=0,i,j;
    for(i=0;i<len;i++)
    {
        if(s[i]=='I')
            s[i]='a';
        else if(s[i]=='V')
            s[i]='b';
        else if(s[i]=='X')
            s[i]='c';
        else if(s[i]=='L')
            s[i]='d';
        else if(s[i]=='C')
            s[i]='e';
        else if(s[i]=='D')
            s[i]='f';
        else if(s[i]=='M')
            s[i]='g';
    }
    if(s[len-1]=='a')
        sum=1;
    else if(s[len-1]=='b')
        sum=5;
    else if(s[len-1]=='c')
        sum=10;
    else if(s[len-1]=='d')
        sum=50;
    else if(s[len-1]=='e')
        sum=100;
    else if(s[len-1]=='f')
        sum=500;
    else if(s[len-1]=='g')
        sum=1000;
    j=len-2;
    if(j<0)
        return sum;
    else
    {
        do
        {
            if(s[j]>=s[j+1])
            {
                if(s[j]=='a')
                    sum=sum+1;
                else if(s[j]=='b')
                    sum=sum+5;
                else if(s[j]=='c')
                    sum=sum+10;
                else if(s[j]=='d')
                    sum=sum+50;
                else if(s[j]=='e')
                    sum=sum+100;
                else if(s[j]=='f')
                    sum=sum+500;
                else if(s[j]=='g')
                    sum=sum+1000;
            }
            else if(s[j]<s[j+1])
            {
                if(s[j]=='a')
                    sum=sum-1;
                else if(s[j]=='b')
                    sum=sum-5;
                else if(s[j]=='c')
                    sum=sum-10;
                else if(s[j]=='d')
                    sum=sum-50;
                else if(s[j]=='e')
                    sum=sum-100;
                else if(s[j]=='f')
                    sum=sum-500;
                else if(s[j]=='g')
                    sum=sum-1000;
            }
        }while(j--);
    }
    return sum;
}
