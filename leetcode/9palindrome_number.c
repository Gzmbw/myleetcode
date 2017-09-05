/*Determine whether an integer is a palindrome. Do this without extra space.*/
/*确定一个整数是否有回文，做这个没有额外的空间*/
bool isPalindrome(int x) {
    const int max=0x7fffffff;
    const int min=0x80000000;
    long int sum=0;
    int temp,y;
    y=x;
    while(y!=0)
    {
        temp=y%10;
        sum=sum*10+temp;
        if(sum<0||sum>max)
            return 0;
        y=y/10;
    }
    if(x==sum)
        return 1;
    else
        return 0;
}
//这个题要注意负数不是回文数
