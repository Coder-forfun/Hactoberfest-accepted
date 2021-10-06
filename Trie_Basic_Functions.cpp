#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long int
using namespace __gnu_pbds;
using namespace std;


class Trie {
    
    
    private:
    class node{
      
        public:
        bool end;
        node* child[26];
        int ctr;
        
        node(){
            end=false;
            ctr=0;
            for(int i=0;i<26;i++)
                child[i]=NULL;
        }
        
    };
    
public:
    /** Initialize your data structure here. */
    node* root;
    Trie() {
        root=new node();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        node* tmp=root;
        for(auto c: word)
        {
            if(!tmp->child[c-'a'])
                tmp->child[c-'a']=new node();
            tmp=tmp->child[c-'a'];
            tmp->ctr++;
        }
        tmp->end=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        node* tmp=root;
        for(auto c: word)
        {
            if(!tmp->child[c-'a'])
                return false;
            tmp=tmp->child[c-'a'];
        }
        if(tmp->end==true)
            return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
         node* tmp=root;
        for(auto c: prefix)
        {
            if(!tmp->child[c-'a'])
                return false;
            tmp=tmp->child[c-'a'];
        }
        return true;
    }
};


int main()
{
  Trie* trie=new Trie();
  cout<<"Enter no of words to insert in trie\n";
  ll n;
  cin>>n;
  cout<<"Enter the words\n";
  for(ll i=0;i<n;i++)
  {
    string s;
    cin>>s;
    trie->insert(s);
  }

  cout<<"Enter the word to check\n";
  string s;
  cin>>s;
  cout<<"Select 1 to check the word as a prefix\n";
  cout<<"Select 2 to check if the entire word is present\n";
  ll ch;
  cin>>ch;
  if(ch==1)
  {
  ll ans=trie->startsWith(s);
  if(ans)
  cout<<"Present\n";
  else
  cout<<"Not Present\n";

  }
  else
  {
    ll ans=trie->search(s);
  if(ans)
  cout<<"Present\n";
  else
  cout<<"Not Present\n";

  }
  

}


