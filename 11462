#include<iostream>
#include<cstring>
using namespace std;
int age[2000001];
int main()
{

    int n;
    cin>>n;
    while(n!=0)
    {
        memset(age,0,2000001);
        for(int i=1;i<=n;i++)
        {
            int temp;
            cin>>temp;
            age[temp]++;
        }
        for(int i=1;i<=2000001;i++)
        {

            for(int j=1;j<=age[i];j++)
            {
                n--;
                if(n!=0)
                    cout<<i<<" ";
                else
                    cout<<i;
            }
        }
        cout<<endl;
        cin>>n;
    }
    return 0;
}
