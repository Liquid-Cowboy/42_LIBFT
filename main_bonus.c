#include "libft.h"
#include "stdio.h"
#define GREEN "\033[32m"
#define WHITE "\033[0m"
#define YELLOW "\033[93m"
#define RED "\033[33m"

void	add_one(void *content)
{
	*(int *)content += 1;
}

int	main(void)
{
	int	value1 = 42;
	int	value2 = 33;
	int value3 = 102;
	t_list *list = NULL;
	t_list *node1;
	t_list *node2;
/*
	====================================================
					testing ft_lstnew
	====================================================
*/
	printf(GREEN"===================================================="
			"\n\t\ttesting ft_lstnew\n"
			"====================================================\n"WHITE);
	node1 = ft_lstnew(&value1);
	node2 = ft_lstnew(&value2);
	printf("Ft_lstnew "YELLOW"node1"WHITE" content is: "YELLOW"%d\n"WHITE, *(int *)node1->content);

	printf("Ft_lstnew "YELLOW"node2"WHITE" content is: "YELLOW"%d\n\n"WHITE, *(int *)node2->content);
	
/*
	=======================================================
					testing ft_lstadd_front
	=======================================================
*/
	printf(GREEN"======================================================="
			"\n\t\ttesting ft_lstadd_front\n"
			"=======================================================\n"WHITE);
	ft_lstadd_front(&list, node2);
	printf ("Node at "YELLOW"root position"WHITE" shows: "YELLOW"%d\n"WHITE"", *(int*)node2->content);
	ft_lstadd_front(&list, node1);
	printf ("Node at "YELLOW"root position"WHITE" now shows: "YELLOW"%d"WHITE"\n\n", *(int*)node1->content);

/*
	=====================================================
					testing ft_lstsize
	=====================================================
*/
	printf(GREEN"====================================================="
			"\n\t\ttesting ft_lstsize\n"
			"=====================================================\n"WHITE);
	printf("List "YELLOW"size"WHITE" is: "YELLOW"%d"WHITE"\n\n", ft_lstsize(node1));

/*
 =====================================================
                 testing ft_lstlast
 =====================================================
*/

	printf(GREEN"====================================================="
		 "\n\t\ttesting ft_lstlast\n"
		 "=====================================================\n"WHITE);
	printf(""YELLOW"Last node"WHITE" shows: "YELLOW"%d"WHITE"\n\n", *(int *)ft_lstlast(list)->content);


/*
 ========================================================
                 testing ft_lstadd_back
 ========================================================
*/

 	t_list *node3;

	node3 = ft_lstnew(&value3);
	printf(GREEN"========================================================"
		 "\n\t\ttesting ft_lstadd_back\n"
		 "========================================================\n"WHITE);
	t_list	*tmp;
	
	tmp = list;
	int	i = 1;
	while (tmp)
	{
		printf ("Node "YELLOW"%d"WHITE" is"YELLOW" %d\n"WHITE, i, *(int *)tmp->content);
		tmp = tmp->next;
		i++;
	}

	printf(YELLOW"\nNow we'll add a new node at the end\n\n"WHITE);

	ft_lstadd_back(&list, node3);
	i = 1;
	tmp = list;
	while (tmp)
	{
		printf ("Node "YELLOW"%d"WHITE" is"YELLOW" %d\n"WHITE, i, *(int *)tmp->content);
		tmp = tmp->next;
		i++;
	}


/*
 ==============================================
                 ft_lstdelone
 ==============================================
*/

	printf(GREEN"==============================================\n"
			"\t\tft_lstdelone\n"
			"==============================================\n");

	printf("Node deletion and deallocation was a success\n\n");

	/*
 ==============================================
                 ft_lstclear
 ==============================================
*/

	printf(GREEN"==============================================\n"
			"\t\tft_lstclear\n"
			"==============================================\n");

	printf("Nodes deletion and deallocation was a success\n\n");
	
	/*
 ==============================================
                 ft_lstiter
 ==============================================
*/
	printf(GREEN"==============================================\n"
			"\t\tft_lstiter\n"
			"==============================================\n");
	
	tmp = list;
	i = 1;
	while (tmp)
	{
		printf (WHITE"Node "YELLOW"%d"WHITE" is"YELLOW" %d\n"WHITE, i, *(int *)tmp->content);
		tmp = tmp->next;
		i++;
	}

	printf(YELLOW"\nFt_lstiter will add 1 to each content\n\n"WHITE);

	ft_lstiter(list, add_one);
	i = 1;
	tmp = list;
	while (tmp)
	{
		printf ("Node "YELLOW"%d"WHITE" is"YELLOW" %d\n"WHITE, i, *(int *)tmp->content);
		tmp = tmp->next;
		i++;
	}

	ft_lstclear(&list, *add_one);
	return (0);

}
