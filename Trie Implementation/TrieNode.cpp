#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<string>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode**children;
    bool isTerminal;
    TrieNode(char data){
        this->data=data;
        children=new TrieNode*[26];
        for(int i=0;i<26;i++)children[i]=NULL;
        isTerminal=false;   
    }
};
class Trie{
    TrieNode *root;
    public:
    Trie(){
        root=new TrieNode('\0');
    }
    private:
    void insertWord(TrieNode*root ,string word){
        if(word==""){
            root->isTerminal=true;
            return;
        }
        int index=word[0]-'a';
        if(root->children[index]==NULL){
            root->children[index]=new TrieNode(word[0]);
            insertWord(root->children[index], word.substr(1, word.length()-1));
        }
        else{
            insertWord(root->children[index], word.substr(1, word.length()-1));
        }
    }
    public:
    void insertWord(string word){
        insertWord(root, word);
    }

    bool search(TrieNode*root, string word){
        if(word.length()==0)return root->isTerminal;
        int index=word[0]-'a';
        if(root->children[index]==NULL)return false;
        else{
            return search(root->children[index], word.substr(1, word.length()-1));
        }
    }
    bool search(string word){
        return search(root, word);
    }

    void removeWord(TrieNode*root, string word){
        if(word.length()==0){
            root->isTerminal=false;
            return;
        }
        int index=word[0]-'a';
        if(root->children[index]==NULL){
            return;
        }
        else{
            removeWord(root->children[index], word.substr(1, word.length()-1));
        }
        TrieNode*child=root->children[index];
        for(int i=0;i<26;i++){
            if(child->children[i]!=NULL)return;
        }
        delete child;
        root->children[index]=NULL;
    }
    void removeWord(string word){
        removeWord(root, word);
    }
    bool patternMatching(vector<string> vect, string pattern) {
        for(int i=0;i<vect.size();i++){
            string word=vect[i];
            for(int j=0;j<word.size();j++){
                insertWord(word.substr(j));
            }
        }
        return search(root,pattern);
    }


    /*      IS PALINDROME PAIR QUESTION        */
    bool isPalindromePair(vector<string> words) {
        Trie myTrie;
        for(int i=0;i<words.size();i++){
            myTrie.insertWord(words[i]);
        }
        for(int i=0;i<words.size();i++){
            string s=string(words[i].rbegin(),words[i].rend());
            if(myTrie.search(words[i]))return true;
        }
        return false;
    }

    /*
    bool search(TrieNode*root, string word){
        if(word.length()==0)return true;
        int index=word[0]-'a';
        if(root->children[index]==NULL)return false;
        else{
            return search(root->children[index], word.substr(1, word.length()-1));
        }
    }
    */

/*           AUTO COMPLETE QUESTION                */
    void printWords(TrieNode*root, string word1){
        if(root->isTerminal){
            cout<<word1<<endl;
        }
        for(int i=0;i<26;i++){
            if(root->children[i]!=NULL){
                printWords(root->children[i], word1+root->children[i]->data);
            }
        }
    }
    bool search(TrieNode*root, string word, string pattern){
        int index=word[0]-'a';
        if(word.length()==0){
            printWords(root, pattern);
            return root->isTerminal;
        }
        if(root->children[index]==NULL)return false;
        if(root->children[index]!=NULL){
            search(root->children[index], word.substr(1), pattern);
        }
    }
    void autoComplete(vector<string> input, string pattern) {
        for(int i=0;i<input.size();i++)insertWord(input[i]);
        search(root, pattern, pattern);
    }
};