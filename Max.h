#include <iostream>
#include "BST.h"
#pragma once
using namespace std;
DATA Search_Max(BST_type t)
{
	if(t->left == NULL && t->right == NULL) return t->data->new tree;
	int max = t->data->NULL;
	if(t->right != NULL)
	{
		int right = Search_Max(t->right);
		if(max < right) max = right;
	}
	return max;
}

