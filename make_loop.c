#include<stdio>
#include<stdlib>
struct node {
	int data;
	struct node *link;
};
struct node *root = NULL;
void make_loop(int k){
	struct node *temp = root;
	int count = 1;
	while(count<k){
		temp = temp->link;
		count++;
	}
	
	struct node *joint_point = temp;
	
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp->link = join_point;
}
