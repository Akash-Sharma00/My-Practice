#include <iostream>
#include<map>
#include<vector>
using namespace std;
static int index = 0;
template <typename T>
class graph
{
    private:

            typename  map< T, int > :: iterator iter;
            map <T,int> vtxMap;
            int numVertices;
            int numedges;

    public:
            void addEdge(graph<T>&, const T& ,const T&);
            void show(graph<T>&);


};

int main()
{
    graph <char> g;

    g.addEdge(g,'A','B');     // add edge AB
    g.addEdge(g,'A','C');
    g.addEdge(g,'B','D');
    g.addEdge(g,'C','D');
    g.addEdge(g,'B','C');
    g.show(g);

    return 0;
}

template <typename T>
void graph<T> :: addEdge ( graph<T>& g , const T& v1 , const T& v2)
{
    pair<map<char, int>::iterator, bool> ret;
      ret = g.vtxMap.insert( pair<char,int>('v1',index));
      if(ret.second )         // if() condition is true , means node
      {                       // gets inserted successfully. Now 
          index++;            // increase "index"to assign new unique
      }                       // value to new node.

      ret = g.vtxMap.insert( std::pair<char,int>('v2',index));
      if(ret.second)
      {
        index++;
      }

}
template<typename T>
 void graph<T> :: show( graph<T>& g)
    {
       for( g.iter = g.vtxMap.begin(); g.iter != g.vtxMap.end(); g.iter++)
         {
             cout<< (*(g.iter)).first <<" - >" << (*(g.iter)).second <<endl;
         }
    }