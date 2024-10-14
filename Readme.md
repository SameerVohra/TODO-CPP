# Todo App in C++

This is a simple command-line Todo application implemented in C++. The application allows users to manage their tasks by adding new tasks, marking them as done, removing tasks, and printing the current task list.

## Features

- **Add a New Task**: Users can input tasks to be added to the list.
- **Mark a Task as Done**: Users can mark tasks as completed, which visually indicates the task has been finished.
- **Remove a Task**: Users can delete tasks from the list.
- **Print the List**: Users can view all tasks along with their completion status.

## Requirements

- A C++ compiler (e.g., g++) is required to compile and run this application.

## How to Run

1. Clone the repository or download the `Todo.cpp` file.
2. Open your terminal and navigate to the directory containing `Todo.cpp`.
3. Compile the application using the following command:

   ```bash
   g++ Todo.cpp -o TodoApp
   ```

4. Run the application with the command:

   ```bash
   ./TodoApp
   ```

5. Follow the on-screen instructions to manage your tasks.

## Usage

- Enter **1** to add a new task.
- Enter **2** to mark a task as done (provide the task index).
- Enter **3** to remove a task (provide the task index).
- Enter **4** to print the current task list.
- Enter **-1** to exit the application.

### Example

```
Choose From Below:
1. Add a new task
2. Mark a task as done
3. Remove a task
4. Print the list
-1: Exit
Enter your choice: 1
Enter a new Task: Buy groceries
Enter your choice: 1
Enter a new Task: Read a book
Enter your choice: 4
1. Buy groceries
2. Read a book
Enter your choice: 2
Enter the index you want to mark as done: 1
Task marked as done!
Enter your choice: 4
1. Buy groceries
2. Read a book (done)
Enter your choice: -1
```
