#include<iostream>
#include<deque>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque <int> dq;
    for(int i=0; i<n; i++){
        int a,t=0;
        cin>>a;
        int b=a;
        while (a>0)
        {
            dq.push_front(a);
            int z=b;
            while(z>0){
                int c=dq.back();
                dq.pop_back();
                dq.push_front(c);
                z--;

            }
        b--;    
        a--;    
        }
        
    while (!dq.empty())
    {
       cout<<dq.front()<<' ';
       dq.pop_front(); 
    }
    cout<<endl;  
    }
    
}
//git