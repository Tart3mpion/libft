
#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
	int i;
	int x;
	
	i = 0;
	if(*needle == '\0')
		return((char *)haystack);
	while(haystack[i] && i < len)
	{
		x = 0;
		if(haystack[i] == needle[x])
		{
			while((i + x) < len && haystack[x + i] == needle[x])
			{
				x++;
				if(!(needle[x]))
					return((char *)haystack + i);
			}
		}
		i++;
	}
	return(0);
}

