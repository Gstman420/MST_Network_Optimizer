# 🌐 MST Network Optimizer using Kruskal’s Algorithm

This project demonstrates a **cost-effective network design** using **Kruskal’s Minimum Spanning Tree (MST) Algorithm** in **C**, integrated with a **Flask + HTML frontend** for interactive input and visualization.

It models real-world applications like **internet cabling**, **power grid layout**, and **transport route optimization**, where planners aim to connect all cities with **minimum total cost** while avoiding redundant connections.

---

## 🧠 Algorithm Used — Kruskal’s MST
Kruskal’s Algorithm follows a **Greedy Approach** to build the MST:

1. Sort all edges by their connection cost (ascending order).  
2. Pick the smallest edge that doesn’t form a cycle (using Union–Find).  
3. Repeat until all cities are connected.

### ⚙️ Algorithmic Concepts:
- **Graph Representation:** Weighted Undirected Graph  
- **Cycle Detection:** Union–Find (Disjoint Set Union)  
- **Time Complexity:** `O(E log E)`  
- **Space Complexity:** `O(V + E)`

---

## ⚡ Features
- Interactive web input for cities and connection costs  
- C backend ensures high-speed computation  
- Flask server bridges frontend and algorithm logic  
- Displays MST edges and total minimum cost  
- Simulates real-world cost optimization problems  

---

## 🧩 Folder Structure


MST_Network_Optimizer/
│
├── mst_backend.c   — Kruskal’s MST algorithm in C
├── server.py       — Flask backend to run the C code
├── index.html      — Web interface for user input
└── README.md       — Project documentation


---

## 🚀 How to Run the Project

### Step 1️⃣ — Compile the C backend


### Step 2️⃣ — Start the Flask server


### Step 3️⃣ — Open in your browser


### Step 4️⃣ — Enter Data
- Enter the **number of cities**  
- Enter the **connection costs** between each city pair (`0` if no direct connection)  
- Click **Compute MST**







---

## 🌍 Real-World Applications

| Domain | Example Use |
|---------|--------------|
| 🌐 **Telecom Networks** | Minimize fiber cable cost |
| ⚡ **Power Grid Design** | Reduce transmission line expense |
| 🛣️ **Transportation Planning** | Build minimal road connectivity |
| 💻 **Computer Networks** | Optimize LAN or data-center wiring |

---

## 🧰 Tech Stack

| Layer | Technology |
|-------|-------------|
| Algorithm | C (Kruskal’s MST) |
| Backend | Python (Flask) |
| Frontend | HTML, CSS, JavaScript |
| Concept | Greedy Algorithm + Graph Theory |

---

## 👨‍💻 Author

**Ghost Neo**  
💡 Developer | CSBS Engineer | Innovator  

GitHub: [@Gstman420](https://github.com/Gstman420)

---

## 📜 License

Licensed under the [MIT License](LICENSE) © 2025 **Ghost Neo**

You are free to use, modify, and distribute this project with attribution.

---

⭐ **If you found this project helpful, don’t forget to give it a star on GitHub!**


