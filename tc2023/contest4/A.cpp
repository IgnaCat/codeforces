#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

set<pair<string,bool>> d;

// C++ implementation of search and insert
// operations on Trie
#include <bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;

struct TrieNode{
	struct TrieNode *children[ALPHABET_SIZE];
	bool isEndOfWord;
};

struct TrieNode *getNode(void){
	struct TrieNode *pNode = new TrieNode;

	pNode->isEndOfWord = false;

	for (int i = 0; i < ALPHABET_SIZE; i++)
		pNode->children[i] = NULL;

	return pNode;
}

void insert(struct TrieNode *root, string key){
	struct TrieNode *pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!pCrawl->children[index])
			pCrawl->children[index] = getNode();

		pCrawl = pCrawl->children[index];
	}

	pCrawl->isEndOfWord = true;
}

bool searchPrefix(struct TrieNode *root, string key){
	struct TrieNode *pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!pCrawl->children[index])
			return false;

		pCrawl = pCrawl->children[index];
	}

	return true;
}

struct TrieNode *root = getNode();
struct TrieNode *rootReverse = getNode();
bool r;

int main() {FIN;
    int Q;
    cin >> Q;
	r = false;
    while (Q--){
        int q; string name, nameReversed;
		cin >> q;
		if (q!=3){
			cin >> name;
		}
        if (q == 1){
			nameReversed = name;
			reverse(nameReversed.begin(), nameReversed.end());
			if (r){
				insert(rootReverse, name);
				insert(root, nameReversed);
			}
			else{
				insert(rootReverse, nameReversed);
            	insert(root, name);
			}
        }
        else if (q == 2){
			if (r) cout << searchPrefix(rootReverse, name) << '\n';
			else cout << searchPrefix(root, name) << '\n';
        }
        else {
			r= !r;
        }
    }
	return 0;
}