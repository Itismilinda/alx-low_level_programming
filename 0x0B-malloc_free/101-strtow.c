#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be analyzed.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
        int count = 0, i;

        for (i = 0; str[i]; i++)
                if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
                        count++;

        return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be splitted.
 *
 * Return: A pointer to an array of strings (words) or NULL if it fails.
 */
char **strtow(char *str)
{
        char **words;
        int i, j, k, len, n_words;

        if (str == NULL || *str == '\0')
                return (NULL);

        n_words = count_words(str);
        words = malloc((n_words + 1) * sizeof(char *));
        if (words == NULL)
                return (NULL);

        for (i = 0, j = 0; i < n_words; i++)
        {
                while (str[j] == ' ')
                        j++;

                len = 0;
                while (str[j + len] != ' ' && str[j + len] != '\0')
                        len++;

                words[i] = malloc((len + 1) * sizeof(char));
                if (words[i] == NULL)
                {
                        for (k = 0; k < i; k++)
                                free(words[k]);
                        free(words);
                        return (NULL);
                }

                for (k = 0; k < len; k++)
                        words[i][k] = str[j + k];
                words[i][len] = '\0';

                j += len;
        }

        words[n_words] = NULL;

        return (words);
}
