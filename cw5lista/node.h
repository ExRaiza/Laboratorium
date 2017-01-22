struct Node{
  int value;
  struct Node *next;
};

typedef struct Node *List;
void usun(List *ptr, int i);
void dopisz_niemalejaco(List *ptr, int i);
void wydrukuj_liste(List list);
