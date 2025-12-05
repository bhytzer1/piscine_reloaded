/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:08:04 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/05 23:28:19 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<unistd.h>

int ft_strlen(char *len)
{
	int i;

	i = 0;
	while(len[i])
		i++;
	return(i);
}

void ft_putstr(char *b)
{
	int len;

	len = 0;
	len = ft_strlen(b);
	write(1, b, len);
	write(1, "\n", 1);
}

int ft_strcmp(char *s1, char *s2)
{
	while(*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main(int argc, char **argv)
{
	int ctr1;
	int ctr2;
	char *temp;

	ctr1 = 1;
	while(ctr1 < argc)
	{
		ctr2 = ctr1 + 1;
		while(ctr2 < argc)
		{
			if (ft_strcmp(argv[ctr1], argv[ctr2]) > 0)
			{
				temp = argv[ctr1];
				argv[ctr1] = argv[ctr2];
				argv[ctr2] = temp;
			}	
			ctr2++;
		}
		ctr1++;
	}
	ctr1 = 1;
	while(ctr1 < argc)
	{
		ft_putstr(argv[ctr1]);
		ctr1++;
	}
}