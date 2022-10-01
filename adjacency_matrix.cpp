#include<iostream>
using namespace std;
class Graph{
private:
int numVertices;
bool** adjMatrix;

public:
Graph(int numVertices){
    this->numVertices=numVertices;
    adjMatrix = new bool*[numVertices];
    for (int i = 0; i < numVertices; i++) {
      adjMatrix[i] = new bool[numVertices];
      for (int j = 0; j < numVertices; j++)
        adjMatrix[i][j] = 0;
}
}

void addEdge(int i,int j){
    adjMatrix[i][j]=1;
    adjMatrix[j][i]=1;
}
void removeEdge(int i,int j){
    adjMatrix[i][j]=0;
    adjMatrix[j][i]=0;
}
void toString(){
    cout<<"  ";
    for(int i=0;i<numVertices;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0;i<numVertices;i++){
        cout<<i<<" ";
        for(int j=0;j<numVertices;j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
};
int main(){
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);

    g.toString();
}