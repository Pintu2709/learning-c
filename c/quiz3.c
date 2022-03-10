<stdio.h>
    
void my_func(int x, int y){
  x = y * 4;
  y = x + 10;
}

int main(){
  int x = 5;
  int y = 9;
  my_func(x, y);
  printf("%d %d", x, y);
}