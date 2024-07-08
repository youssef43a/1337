char	*ft_strstr(char	*str, char	*to_find)
{
	int i;
	int tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (str[i] == to_find[i])
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

#include <stdio.h>
int main ()
{
	char *str     = "hello youssef\n";
	char *to_find = "youh";
	printf("%s\n",ft_strstr(str,to_find));
}
