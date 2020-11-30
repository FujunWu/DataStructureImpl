#include <string.h>

/**
 * @brief BF算法，纯C实现；
 * 顺序遍历母串，将每个字符作为匹配的起始字符，判读是否匹配子串；
 * 时间复杂度O(m*n)。
 * @param str 母串
 * @param target 子串
 * @return char* 子串在母串中的位置，若不匹配返回NULL
 */
char* StrStr(const char* str, const char* target)
{
    if (!*target)   // 判断边界条件
    {
        return (char*)str;
    }
    if (strlen(str) < strlen(target))
    {
        return NULL;
    }

    char *p1 = (char*)str;   // 母串游标初始化，指向母串第一个字符
    while (*p1)
    {
        char* p1Begin = p1;   // 暂存母串游标的起始位置
        char* p2 = (char*)target;   // 子串游标初始化，总是指向子串的第一个字符
        while (*p1 && *p2 && *p1 == *p2)   // 字符判断条件
        {
            ++p1;
            ++p2;
        }
        if (!*p2)   // 子串匹配的条件
        {
            return p1Begin;   // 返回的母串游标的起始位置
        }
        else
        {
            p1 = p1Begin + 1;   // 不匹配，则从母串下一个字符重新开始比较
        }        
    }
    return NULL;
}