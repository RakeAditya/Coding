// circle m hmko n petrol pumps die h hmko y krna h ki ek aisa petrol pump choose krna h jisse hm ghoom kr wapas uspe hi aajae
#include<bits/stdc++.h>
using namespace std;
// pump ek class h jo petrol pump ko represent kr rha h isme do value h 
// pet -> petrol kitna h 
// dist -> agle petrol pump k distance
class pump{
    public: 
    int pet;
    int dist;
    pump(int pet,int dist)
    {
        this->pet = pet;
        this->dist = dist;
    }
};
// cooncept
// hmre pass start h jo ki kis pump s start kie h usko represent krega
// balance store krega kitna petrol bacha h agr +ve to aage ja skte h wrna -ve m aage ni ja paenge
// kami jb balance -ve ho jaega to kitna petrol km hua wo store kra leneg
int solve(vector<pump*> &petrolPump,int n)
{
    int start = 0;
    int balance = 0;
    int kami = 0;
    for(int i = 0;i<n;i++)
    {
        // balance store kie
        balance += petrolPump[i]->pet - petrolPump[i]->dist;
        if(balance < 0)
        // yani aage ni ja skte
        {
            // kitna petrol km pda store kr lie
            kami += balance;
            // new balance ko zero kie kyonki ab doosre pump s start krna hoga
            balance = 0;
            // start ko i + 1 kie na ki start++ kyonki agr start wale index s ni pahonch pae to start s leke i tk k beech k kisi index s bhi ni pahonch paenge
            start = i+1;
        }
        // agr balance ni km hota h to normal agle pump p jata jaega
    }
    // end m jitna kami hua agr kisi aur pump s suru kie aur jo balance bacha wo usko compensate kr deta h to hm ja skte h hr jagah is case m wo wala pump start m store hoga aur anser
    if(balance + kami >= 0)
        return start;
        // agr compensate ni kr pae to hmko aisa koi bhi station ni mila jisse hm sare jagah pahonch ske
    else    
    return -1;
}
int main()
{
    int n = 6;
    // petrolPump naam k ek vector banae h hm jo ki alg alg objects ko store krega pump k
    vector<pump*> petrolPump;
    pump* obj1 = new pump(6,5);
    pump* obj2 = new pump(7,6);
    pump* obj3 = new pump(4,7);
    pump* obj4 = new pump(10,8);
    pump* obj5 = new pump(6,6);
    pump* obj6 = new pump(5,4);
    petrolPump.push_back(obj1);
    petrolPump.push_back(obj2);
    petrolPump.push_back(obj3);
    petrolPump.push_back(obj4);
    petrolPump.push_back(obj5);
    petrolPump.push_back(obj6);
    // cout<<obj4->dist;
    int ans = solve(petrolPump,n);
    cout<<ans;
    return 0;
}