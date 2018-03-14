class Solution {
public:

    ListNode* mergeTwolists(ListNode *p,ListNode *q)
	{
		ListNode *re = new ListNode(0);
        ListNode *la;
		la = re;
		while(p != NULL || q != NULL)
		{
			if(p== NULL && q != NULL)
			{
				while( q != NULL ){
				la ->next = q;
				q = q->next;
				la = la->next;}
			}
			else if(p != NULL && q == NULL)
			{
				while( p != NULL ){
				la->next = p;
				p = p->next;
				la = la->next;}
			}
			else{
				if( p->val < q->val )
				{
					la->next = p;
					p = p->next;
					la = la->next;
				}
				else{
					la->next = q;
					q = q->next;
					la = la->next;
				}
			}
		}
        return re->next;
	}


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
            return nullptr;
        while( lists.size() != 1)
		{
			ListNode* p,*q,*temp;
			for(int i=0;i < lists.size()-1;i++)
			{
				temp = mergeTwolists(lists[i],lists[i+1]);
				lists.erase(lists.begin()+i);lists.erase(lists.begin()+i);
				lists.insert(lists.begin()+i,temp);
			}
		}
		return lists[0];
    }

};