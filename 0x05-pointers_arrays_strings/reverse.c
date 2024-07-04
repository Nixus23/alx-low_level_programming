#include <stdio.h>

void print_rev(char *s)
{
	char temp;
	char *start, *end;

	end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	start = s;

	while (start < end)
	{
		temp = *start;
		start = end;
		*end = temp;

		start++;
		end--;
	}


}


int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
