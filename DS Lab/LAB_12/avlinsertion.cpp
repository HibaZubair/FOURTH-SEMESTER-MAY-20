//avl insertion
#include<iostream>
using namespace std;
struct avl 
{
   int data;
   struct avl *l;
   struct avl *r;
}*r;

class avltree 
{
   public: 
   avl_tree() 
	{
       r = NULL;
    }
	      
//to check heaight	      
    int height(avl *t) 
	{
       int h = 0;
       if (t != NULL) 
	{
      int l_height = height(t->l);//to check left height
      int r_height = height(t->r);//to check right height
      int max_height = max(l_height, r_height);//total height of tree
      h = max_height + 1;
    }
   return h;
    }

//to check the branch/balance factor to be in range of -1-0-1
//b_factor==branch factor
    int difference(avl *t) 
	{
        int l_height = height(t->l);
        int r_height = height(t->r);
        int b_factor = l_height - r_height;
        return b_factor;
    }
    
//all below are for rotations
    avl* rr_rotat(avl *parent) 
	{
   avl *t;
   t = parent->r;
   parent->r = t->l;
   t->l = parent;
   cout<<"Right-Right Rotation";
   return t;
   }
   
   
   avl* ll_rotat(avl *parent) 
   {
   avl *t;
   t = parent->l;
   parent->l = t->r;
   t->r = parent;
   cout<<"Left-Left Rotation";
   return t;
  }
  
  avl* lr_rotat(avl *parent) {
   avl *t;
   t = parent->l;
   parent->l = rr_rotat(t);
   cout<<"Left-Right Rotation";
   return ll_rotat(parent);
}
avl* rl_rotat(avl *parent) {
   avl *t;
   t = parent->r;
   parent->r = ll_rotat(t);
   cout<<"Right-Left Rotation";
   return rr_rotat(parent);
}


avl* balance(avl *t) 
{
	//the function of difference will return balnace factor to bal_factor here
   int bal_factor = difference(t);
   //condition on which we need to balance
   if (bal_factor > 1) 
   {
      if (difference(t->l) > 0)
         t = ll_rotat(t);//left-left rotate
      else
         t = lr_rotat(t);//left-right
   } 
   else if (bal_factor < -1) {
      if (difference(t->r) > 0)
         t = rl_rotat(t);//right left
      else
         t = rr_rotat(t);//right-right
   }
   return t;
}
//insertion
avl* insert(avl *r, int v) 
{
   if (r == NULL) 
   {
      r = new avl;
      r->data = v;
      r->l = NULL;
      r->r = NULL;
      return r;
   } 
   else if (v< r->data) //left insertion
   {
      r->l = insert(r->l, v);
      r = balance(r);
   } 
   else if (v >= r->data) //right insertion
   {
      r->r = insert(r->r, v);
      r = balance(r);
   }
    return r;
}
void show(avl *p, int l) {
   int i;
   if (p != NULL) 
   {
      show(p->r, l+ 1);
      cout<<" ";
      if (p == r)
         cout << "Root -> ";
      for (i = 0; i < l&& p != r; i++)
         cout << " ";
         cout << p->data;
         show(p->l, l + 1);
   }
}

};
int main() 
{
   int c, i;
   avltree avl;
   cout<<"AVL-TREE";
   while (1) 
   {
   	cout<<endl<<endl;
      cout << "1.Insert Element into the tree" << endl;
      cout << "2.show Balanced AVL Tree" << endl;
      cout << "3.Exit" << endl;
      cout << "Enter your Choice: ";
      cin >> c;
      switch (c) {
         case 1:
            cout << "Enter value to be inserted: ";
            cin >> i;
            r = avl.insert(r, i);
         break;
         case 2:
            if (r == NULL) 
			{
               cout << "Tree is Empty" << endl;
               continue;
            }
            cout << "Balanced AVL Tree:" << endl;
            avl.show(r, 1);
            cout<<endl;
         break;
         case 3:
            exit(1);
         break;
         default:
            cout << "Wrong Choice" << endl;
      }
   }
   return 0;
}
