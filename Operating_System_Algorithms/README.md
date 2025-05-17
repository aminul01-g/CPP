# Operating Systems Algorithms in C++

This repository contains implementations of key Operating System algorithms in C++. Each program is designed to take user input and demonstrate the working of the algorithm through visual outputs like charts, tables, or sequence lists.

---

## 📂 Contents

### 🧠 CPU Scheduling Algorithms
- **First Come First Serve (FCFS)**
- **Shortest Job First (SJF) – Preemptive & Non-preemptive**
- **Priority Scheduling – Preemptive & Non-preemptive**

Each takes process details such as Arrival Time, Burst Time, and Priority, and calculates:
- Gantt Chart
- Completion Time
- Turnaround Time
- Waiting Time

---

### 💽 Disk Scheduling
- **FCFS Disk Scheduling**

Simulates how disk arm moves for each request and calculates:
- Total Seek Time
- Seek Sequence

---

### 📄 Page Replacement Algorithms

Each of these takes a page reference string and frame capacity as user input and displays a step-by-step chart of page hits and faults.

- ✅ **FIFO (First-In-First-Out)**
- ✅ **LRU (Least Recently Used)**
- ✅ **Optimal Page Replacement**

Output includes:
- Frame State After Each Reference
- Hit or Miss Chart
- Total Page Faults and Hits

---

### 🏦 Banker's Algorithm

A simulation of the deadlock avoidance strategy:
- Takes Allocation, Max, and Available matrices as input
- Calculates Need matrix
- Checks if the system is in a **safe state**
- Displays the **Safe Sequence** if one exists

---

## 🧪 Sample Input/Output (Page Replacement)

### Input:
    Page references: 7 0 1 2 0 3 0 4 2 3 0 3 2
    Frame capacity: 4

### Output (FIFO Example):

### Page Frame State Result
7 7 Miss

0 7 0 Miss

1 7 0 1 Miss

2 7 0 1 2 Miss

0 7 0 1 2 Hit

3 0 1 2 3 Miss
...

Total Hits: 6
Total Misses (Page Faults): 7


---

## 🧰 Requirements

- C++ Compiler (e.g., `g++`)
- Compatible with Linux, Windows, or macOS

---

## 🚀 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/os-algorithms-cpp.git
   cd os-algorithms-cpp

2. Compile any file:
 
        g++ fifo_page_replacement.cpp -o fifo
        ./fifo
3. Follow the prompts for input.
