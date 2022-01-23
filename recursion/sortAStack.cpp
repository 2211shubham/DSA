
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void insert(stack<int> &s, int temp){
    if(s.size() == 0 || s.top() <= temp){
        s.push(temp);
        return;
    }
    int x = s.top();
    s.pop();
    insert(s,temp);
    s.push(x);
}

void sort1(stack<int> &s){
    if(s.size() ==1 ){
        return;
    }
    int temp = s.top();
    s.pop();
    sort1(s);
    insert(s,temp);
}
void SortedStack :: sort()
{
   sort1(s);
}
