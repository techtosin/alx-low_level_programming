 - Singly linked lists
  Foundations > Low-level programming & Algorithm > Data structures and Algorithms
   By Julien Barbier, co-founder & CEO at Holberton School
    Ongoing project - started 07-29-2021, must end by 07-30-2021 (in about 11 hours) - you're done with 0% of tasks.
     Checker was released at 07-29-2021 12:00 PM
      QA review fully automated.
      Concepts
      For this project, students are expected to look at this concept:

      Data Structures


      Resources
      Read or watch:

      Linked Lists
      Google
      Youtube
      Learning Objectives
      At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

      General
      When and why using linked lists vs arrays
      How to build and use linked lists
      Requirements
      General
      Allowed editors: vi, vim, emacs
      All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
      All your files should end with a new line
      A README.md file, at the root of the folder of the project is mandatory
      Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
      You are not allowed to use global variables
      No more than 5 functions per file
      The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
      You are allowed to use _putchar
      You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
      In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
      The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
      Don’t forget to push your header file
      All your header files should be include guarded
      More Info
      Please use this data structure for this project:

      /**
       *  * struct list_s - singly linked list
       *   * @str: string - (malloc'ed string)
       *    * @len: length of the string
       *     * @next: points to the next node
       *      *
       *       * Description: singly linked list node structure
       *        * for Holberton project
       *         */
      typedef struct list_s
{
	    char *str;
	        unsigned int len;
		    struct list_s *next;
} list_t;
Quiz questions
Show

Tasks
0. Print list
mandatory
Write a function that prints all the elements of a list_t list.

Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
	You are allowed to use printf
	julien@ubuntu:~/0x12. Singly linked lists$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

	/**
	 *  * main - check the code for ALX School students.
	 *   *
	 *    * Return: Always 0.
	 *     */
	int main(void)
{
	    list_t *head;
	        list_t *new;
		    list_t hello = {"World", 5, NULL};
		        size_t n;

			    head = &hello;
			        new = malloc(sizeof(list_t));
				    if (new == NULL)
					        {
							        printf("Error\n");
								        return (1);
									    }
				        new->str = strdup("Hello");
					    new->len = 5;
					        new->next = head;
						    head = new;
						        n = print_list(head);
							    printf("-> %lu elements\n", n);

							        printf("\n");
								    free(new->str);
								        new->str = NULL;
									    n = print_list(head);
									        printf("-> %lu elements\n", n);

										    free(new);
										        return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
	[5] World
	-> 2 elements
	julien@ubuntu:~/0x12. Singly linked lists$ 
	Repo:

	GitHub repository: alx-low_level_programming
	Directory: 0x12-singly_linked_lists
	File: 0-print_list.c
	   
	1. List length
	mandatory
	Write a function that returns the number of elements in a linked list_t list.

	Prototype: size_t list_len(const list_t *h);
	julien@ubuntu:~/0x12. Singly linked lists$ cat 1-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

	/**
	 *  * main - check the code for ALX School students.
	 *   *
	 *    * Return: Always 0.
	 *     */
	int main(void)
{
	    list_t *head;
	        list_t *new;
		    list_t hello = {"World", 5, NULL};
		        size_t n;

			    head = &hello;
			        new = malloc(sizeof(list_t));
				    if (new == NULL)
					        {
							        printf("Error\n");
								        return (1);
									    }
				        new->str = strdup("Hello");
					    new->len = 5;
					        new->next = head;
						    head = new;
						        n = list_len(head);
							    printf("-> %lu elements\n", n);
							        free(new->str);
								    free(new);
								        return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
julien@ubuntu:~/0x12. Singly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x12-singly_linked_lists
File: 1-list_len.c
   
2. Add node
mandatory
Write a function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup
julien@ubuntu:~/0x12. Singly linked lists$ cat 2-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code for ALX School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    list_t *head;

	        head = NULL;
		    add_node(&head, "Alexandro");
		        add_node(&head, "Asaia");
			    add_node(&head, "Augustin");
			        add_node(&head, "Bennett");
				    add_node(&head, "Bilal");
				        add_node(&head, "Chandler");
					    add_node(&head, "Damian");
					        add_node(&head, "Daniel");
						    add_node(&head, "Dora");
						        add_node(&head, "Electra");
							    add_node(&head, "Gloria");
							        add_node(&head, "Joe");
								    add_node(&head, "John");
								        add_node(&head, "John");
									    add_node(&head, "Josquin");
									        add_node(&head, "Kris");
										    add_node(&head, "Marine");
										        add_node(&head, "Mason");
											    add_node(&head, "Praylin");
											        add_node(&head, "Rick");
												    add_node(&head, "Rick");
												        add_node(&head, "Rona");
													    add_node(&head, "Siphan");
													        add_node(&head, "Sravanthi");
														    add_node(&head, "Steven");
														        add_node(&head, "Tasneem");
															    add_node(&head, "William");
															        add_node(&head, "Zee");
																    print_list(head);
																        return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/0x12. Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/0x12. Singly linked lists$ 
^ Cohort 0, San Francisco students

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x12-singly_linked_lists
File: 2-add_node.c
   
3. Add node at the end
mandatory
Write a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup
julien@ubuntu:~/0x12. Singly linked lists$ cat 3-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code for ALX School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    list_t *head;

	        head = NULL;
		    add_node_end(&head, "Anne");
		        add_node_end(&head, "Colton");
			    add_node_end(&head, "Corbin");
			        add_node_end(&head, "Daniel");
				    add_node_end(&head, "Danton");
				        add_node_end(&head, "David");
					    add_node_end(&head, "Gary");
					        add_node_end(&head, "Holden");
						    add_node_end(&head, "Ian");
						        add_node_end(&head, "Ian");
							    add_node_end(&head, "Jay");
							        add_node_end(&head, "Jennie");
								    add_node_end(&head, "Jimmy");
								        add_node_end(&head, "Justin");
									    add_node_end(&head, "Kalson");
									        add_node_end(&head, "Kina");
										    add_node_end(&head, "Matthew");
										        add_node_end(&head, "Max");
											    add_node_end(&head, "Michael");
											        add_node_end(&head, "Ntuj");
												    add_node_end(&head, "Philip");
												        add_node_end(&head, "Richard");
													    add_node_end(&head, "Samantha");
													        add_node_end(&head, "Stuart");
														    add_node_end(&head, "Swati");
														        add_node_end(&head, "Timothy");
															    add_node_end(&head, "Victor");
															        add_node_end(&head, "Walton");
																    print_list(head);
																        return (0);
}
