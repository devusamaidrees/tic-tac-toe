#include<iostream>

using namespace std;
char arr[3][3] = {
  {
    '1',
    '2',
    '3'
  },
  {
    '4',
    '5',
    '6'
  },
  {
    '7',
    '8',
    '9'
  }
};
char turn = 'x';
bool draw = false;
void display() {
  cout << "\n\n| " << arr[0][0] << " | " << arr[0][1] << " | " << arr[0][2] << " |" << endl;
  cout << "-------------" << endl;
  cout << "| " << arr[1][0] << " | " << arr[1][1] << " | " << arr[1][2] << " |" << endl;
  cout << "-------------" << endl;
  cout << "| " << arr[2][0] << " | " << arr[2][1] << " | " << arr[2][2] << " |" << endl;
  cout << "-------------" << endl;
}
void players2() {
  int row, column;
  char choice;
  if (turn == 'x') {
    cout << "player [x] :";
    cin >> choice;
  } else {
    cout << "computer [O]:";
    int random_number = rand() % 9;
    choice = '0' + random_number;
  }
  switch (choice) {
  case '1':
    row = 0;
    column = 0;
    break;
  case '2':
    row = 0;
    column = 1;
    break;
  case '3':
    row = 0;
    column = 2;
    break;
  case '4':
    row = 1;
    column = 0;
    break;
  case '5':
    row = 1;
    column = 1;
    break;
  case '6':
    row = 1;
    column = 2;
    break;
  case '7':
    row = 2;
    column = 0;
    break;
  case '8':
    row = 2;
    column = 1;
    break;
  case '9':
    row = 2;
    column = 2;
    break;
  default:
    cout << "invalid input" << endl;
    players2();
  }
  system("cls");
  if (turn == 'x' && arr[row][column] != 'x' && arr[row][column] != 'O') {
    arr[row][column] = 'x';
    turn = 'O';
  } else if (turn == 'O' && arr[row][column] != 'x' && arr[row][column] != 'O') {
    arr[row][column] = 'O';
    turn = 'x';
  } else {
    cout << "box is already filled " << endl << "try again" << endl;
  }

}
void players1() {
  int row, column;
  char choice;
  if (turn == 'x') {
    cout << "player 1 [x] :";
  }
  if (turn == 'O') {
    cout << "player 2 [O] :";
  }
  cin >> choice;
  switch (choice) {
  case '1':
    row = 0;
    column = 0;
    break;
  case '2':
    row = 0;
    column = 1;
    break;
  case '3':
    row = 0;
    column = 2;
    break;
  case '4':
    row = 1;
    column = 0;
    break;
  case '5':
    row = 1;
    column = 1;
    break;
  case '6':
    row = 1;
    column = 2;
    break;
  case '7':
    row = 2;
    column = 0;
    break;
  case '8':
    row = 2;
    column = 1;
    break;
  case '9':
    row = 2;
    column = 2;
    break;
  default:
    cout << "invalid input" << endl;
    players1();
  }
  system("cls");
  if (turn == 'x' && arr[row][column] != 'x' && arr[row][column] != 'O') {
    arr[row][column] = 'x';
    turn = 'O';
  } else if (turn == 'O' && arr[row][column] != 'x' && arr[row][column] != 'O') {
    arr[row][column] = 'O';
    turn = 'x';
  } else {
    cout << "the box is already filled\n" << "try again" << endl;
  }
}
bool gameover() {
  draw = false;
  for (int i = 0; i < 3; i++) {
    if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) {
      return false;
    }
  }

  for (int i = 0; i < 3; i++) {
    if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]) {
      return false;
    }
  }
  if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) {
    return false;
  } else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
    return false;
  } {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (arr[i][j] != 'x' && arr[i][j] != 'O') {
          return true;
        }
      }
    }
    draw = true;
    return false;
  }
  return true;

}
int main() {
  char x;
  while (true) {
    cout << "\n1.play with computer" << endl;
    cout << "\n2.play with friend" << endl << endl;
    cout << "\nenter your choice :" << endl;
    cin >> x;
    if (x == '1') {

      while (gameover()) {
        display();
        players2();
        gameover();
      }
      display();
      if (draw == true) {
        cout << "the game is draw";
      } else if (turn == 'x') {
        cout << "computer [O] wins";
      } else {
        cout << "player [x] wins";
      }

    } else if (x == '2') {
      while (gameover()) {
        display();
        players1();
        gameover();
      }
      display();
      if (draw == true) {
        cout << "the game is draw";
      } else if (turn == 'O') {
        cout << "player 1 [x] wins ";
      } else {
        cout << "player 2 [O] wins ";
      }
    } else {
      cout << "wrong input";
    }
    arr[0][0] = '1';
    arr[0][1] = '2';
    arr[0][2] = '3';
    arr[1][0] = '4';
    arr[1][1] = '5';
    arr[1][2] = '6';
    arr[2][0] = '7';
    arr[2][1] = '8';
    arr[2][2] = '9';
  }

}
