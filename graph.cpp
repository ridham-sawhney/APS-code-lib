#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
    int V;
    list<int> *l;

    public:
    Graph(int v)
    {
        V=v;
        l=new list<int>[V];
    }
    void addEdge(int i,int j)
    {
        l[i].push_back(j);
        l[j].push_back(i);
    }
    void displayEdge()
    {
        for(int i=0;i<V;i++)
        {
            cout<<endl<< i<<"->>>>>";
            for(auto it:l[i])
            cout<<it<<"-";
        }
    }

    void bfs (int source)
    {
       
        vector<int> visited(V,0);
        

        queue<int> q;
        q.push(source);
        visited[source]=1;
        while(!q.empty())
        {
            int f=q.front();
            cout<<f<<" ";
            q.pop();
            for(auto nbr:l[f])
            {
                if(!visited[nbr])
                {
                  q.push(nbr);
                  visited[nbr]=1;
                }
            }
        }

    }
    void dfshelp(int node,vector<int>& visited)
    {
        visited[node]=1;
        cout<<node<<" ";
        for(auto nbr:l[node])
        {
            if(!visited[nbr])
            dfshelp(nbr,visited);
        }
    }

    void dfs(int source)
    {
        vector<int> visited(V,0);
        dfshelp(source,visited);
    }
};



int main()
{
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);
  //  g.displayEdge();
    g.dfs(1);

}