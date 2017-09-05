/* Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.
The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle. 
最初，位置（0，0）有一个机器人。给定一系列的动作，判断这个机器人是否产生一个圆圈，这意味着它返回原来的位置。
移动序列由字符串表示。 每个动作都由一个角色代表。 有效的机器人移动是R（右），L（左），U（向上）和D（向下）。 输出应为true或false，表示机器人是否制作圆。
*/
bool judgeCircle(char* moves) {
    int num_L=0,num_R=0,num_U=0,num_D=0;
    int i;
    int len=strlen(moves);
    for(i=0;i<len;i++)
    {
        if(moves[i]=='L')
            num_L++;
        else if(moves[i]=='R')
            num_R++;
        else if(moves[i]=='U')
            num_U++;
        else if(moves[i]=='D')
            num_D++;
        else 
            return 0;
    }
    if((num_L==num_R)&&(num_U==num_D))
        return 1;
    else
        return 0;
}
//把L、R、U、D的个数分别统计一下，然后看左的个数和右的个数是否相等，上和下的个数是否相等。
