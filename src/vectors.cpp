#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
struct Vertex
{
    float x,y,z;
};

ostream& operator<<(ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << " , " << vertex.y << " ," << vertex.z;
    return stream;
}

void Function(const vector<Vertex>& vertices)
{

}

int main(){
    
    //contiguous memory in the vector
    vector<Vertex> vertices;
    Function(vertices);


    vertices.push_back({1,2,3});
    vertices.push_back({4,5,6});

    for(int i=0;i<vertices.size();i++)
        cout << vertices[i] << endl;

    for(Vertex v: vertices)
        cout << v << endl;
    
    vertices.erase(vertices.begin()+1);

    vertices.clear();
    cin.get();
}

