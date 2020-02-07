#define FIELD(a) char* a##_string; int a##_size; int a##_index;
#define INIT(a,b,c) a##_string = a; a##_size = b; a##_index = c;
class Record {
  FIELD(one);
  FIELD(two);
  FIELD(three);
  Record() {
    INIT(one,63,1);
    INIT(two,63,1);
    INIT(one,63,1);
  }

};
int main() {
  Record r;
}
