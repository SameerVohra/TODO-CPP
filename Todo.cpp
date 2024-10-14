#include<bits/stdc++.h>
using namespace std;

struct todoList{
  vector<string> task;
  vector<bool> isDone;


string strikeThrough(string& task){
  string res = "";
  for(char c: task){
    res+=c;
    res+="\u0336";
  }
  return res;
}

  void addTask(string& ele){
    task.push_back(ele);
    isDone.push_back(false);
  }

  void markAsDone(int ind){
    if(ind>=0 && ind<task.size()){
      if(isDone[ind]==true){
        cout << "Task Already completed" << endl;
      }
      else{
        isDone[ind] = true;
        task[ind] = strikeThrough(task[ind]);
        task[ind]+=" (done)";
      }
    }
    else{
      cout << "Enter a valid index";
    }
  }

  void removeTask(int ind){
    if(ind>=0 && ind<task.size()){
      task.erase(task.begin()+ind);
      isDone.erase(isDone.begin()+ind);
    }
    else{
      cout << "Enter a valid index";
    }
  }

  void printTasks(){
    for(int i=0; i<task.size(); i++){
      cout << i+1 << ". " << task[i] << endl;
    }
  }
};


int main(){
  cout << "Choose From Below: " << endl;
  cout << "1. Add a new task" << endl;
  cout << "2. Mark a task as done" << endl;
  cout << "3. Remove a task" << endl;
  cout << "4. Print the list" << endl;
  cout << "-1: Exit" << endl;
  cout << "Enter your choice: ";
  int input;
  cin >> input;

  todoList Tasks;

  while(input!=-1){
    if(input==1){
      cin.ignore();
      string newTask;
      cout << "Enter a new Task: ";
      getline(cin, newTask);
      Tasks.addTask(newTask);
    }
    if(input == 2){
      cout << "Enter the index you want to mark as done: ";
      int ind;
      cin>>ind;
      Tasks.markAsDone(ind-1);
    }
    if(input==3){
      cout << "Enter the index you want to remove from the list: ";
      int ind;
      cin >> ind;
      Tasks.removeTask(ind-1);
    }
    if(input == 4) Tasks.printTasks();
    cout << endl << "Enter your choice: ";
    cin>>input;
  }
}
