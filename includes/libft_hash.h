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
t_hash	*ft_hashlast(t_hash *hash);
void	ft_hashadd_back(t_hash **hash, t_hash *new);
void	ft_hashadd_front(t_hash **hash, t_hash *new);
#endif