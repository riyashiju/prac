#include <iostream>

using namespace std;

// Create an Musics box with specified qualities such as the width and songname

MusicBox Box2 {
public:
int width;
string songname;
};

int main() {
  MusicBox Box2 ;  
  // Create an object of MyClass
  // Access attributes and set values
  Box2.width = 15; 
  Box2.songname = "Some text";

  // Print attribute values
  cout << Box2.width << "\n";
  cout << Box2.songname;
  return 0;
}

