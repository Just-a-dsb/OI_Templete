int dfs(int t)
{
    if(满足输出条件)
    {
        输出解;
    }
    else
    {
        for(int i=1;i<=尝试方法数;i++)
        {
            if(满足进一步搜索条件)
            {
                为进一步搜索所需要的状态打上标记
                dfs(t+1);
                恢复到打标记前的状态
            }
        }
    }
}