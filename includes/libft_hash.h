#ifndef LIBFT_HASH_H
# define LIBFT_HASH_H
typedef struct      s_hash
{
	char			*key;
	void			*value;
	struct s_hash	*head;
	struct s_hash	*before;
	struct s_hash	*next;
	void			(*show)(struct s_hash *, char *);
	struct s_hash	*(*last)(struct s_hash *);
	void 			(*add_back)(struct  s_hash **, struct s_hash *);
	void 			(*add_front)(struct  s_hash **, struct s_hash *);
}               t_hash;

t_hash	*ft_hashnew(char *key, void *value);
void	ft_hashprint(t_hash *hash, char *s);
t_hash	*ft_hashlast(t_hash *hash);
void	ft_hashadd_back(t_hash **hash, t_hash *new);
void	ft_hashadd_front(t_hash **hash, t_hash *new);
#endif