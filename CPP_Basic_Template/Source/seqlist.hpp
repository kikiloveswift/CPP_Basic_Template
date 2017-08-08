#ifndef  __MY_SEQLIST_H__ 
#define __MY_SEQLIST_H__

typedef void SeqList;
typedef void SeqListNode;

//创建一个空的线性表
SeqList* SeqList_Create(int capacity);

//销毁一个线性表
void SeqList_Destroy(SeqList* list);

//清空一个线性表
void SeqList_Clear(SeqList* list);

int SeqList_Length(SeqList* list);

int SeqList_Capacity(SeqList* list);

//向一个线性表某一个位置插入新的元素
int SeqList_Insert(SeqList* list, SeqListNode* node, int pos);

//获取指定位置的元素
SeqListNode* SeqList_Get(SeqList* list, int pos);

//删除指定位置的元素
SeqListNode* SeqList_Delete(SeqList* list, int pos);


#endif  //__MY_SEQLIST_H__



