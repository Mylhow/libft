#ifndef LIBFT_HASH_H
# define LIBFT_HASH_H
typedef struct      s_hash
{
	char			*key;
	void			*value;
	struct s_hash	*head;
	struct s_hash	*before;
	struct s_hash	*next;
}               t_hash;

t_hash	*ft_hashnew(char *key, void *value);
void	ft_hashprint(t_hash *hash, char *s);
#endif