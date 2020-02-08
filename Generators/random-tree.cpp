#include <bits/stdc++.h>
using namespace std;
const int MINN = 100005, MAXN = 1000005; 

int rand(int a, int b){return a+rand()%(b-a+1);}

int main(int argc, char *argv[]){
    srand(atoi(argv[1]));
    
    int n = rand(MINN,MAXN);
    printf("%d\n", n);

    vector<pair<int,int>> edges;
    for(int i = 2; i <= n; i++) edges.emplace_back(rand(1,i-1),i);
    
    vector<int> perm(n+1);
    for(int i = 1; i <= n; i++) perm[i] = i;
    
    random_shuffle(perm.begin()+1, perm.end());
    random_shuffle(edges.begin(), edges.end());
    
    for(pair<int,int> edge : edges){
        int a = edge.first, b = edge.second;
        if(rand()&1)    swap(a,b);
        printf("%d %d\n", perm[a], perm[b]);
    }
}