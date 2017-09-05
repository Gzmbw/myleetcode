/*The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.
两个整数之间的汉明距离是相应位不同的位置数。
给定两个整数x和y，计算汉明距离。
*/
//两个数字之间的汉明距离就是其二进制数对应位不同的个数，方法就是按位分别取出两个数对应位上的数并异或，然后把为1的情况累加起来就是汉明距离。
int hammingDistance(int x, int y) {
    int count=0;
    int i;
    for(i=0;i<32;i++)
    {
        if((x&(1<<i))^(y&(1<<i)))
            count++;
    }
    return count;
    
}
