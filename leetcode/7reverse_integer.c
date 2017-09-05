/*Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

click to show spoilers.

Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows. 
*/
/*******c**********/
int reverse(int x) {
    int temp=0;
    const int max=0x7fffffff;//这是整型最大值
    const int min=0x80000000;//这是整型最小值
    long long int sum=0;
    while(x!=0)
    {
        temp=x%10;
        sum=sum*10+temp;
        if(sum<min||sum>max)
            return 0;
        x=x/10;
    }
    return sum;
}
//不用管正负数，注意要判断是否溢出
