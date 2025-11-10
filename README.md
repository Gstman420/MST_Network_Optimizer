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
- **Graph Representation** → Weighted Undirected Graph  
- **Cycle Detection** → Union–Find (Disjoint Set Union)  
- **Complexity:**  
  - Time: `O(E log E)`  
  - Space: `O(V + E)`

---

## ⚡ Features
✅ Interactive web interface to input cities and connection costs  
✅ C backend ensures high-speed computation  
✅ Flask server bridges frontend and algorithm logic  
✅ Displays MST edges and total minimal cost  
✅ Simulates real-world cost optimization problems  

---

## 🧩 Folder Structure
MST_Network_Optimizer/
│
├── mst_backend.c # Kruskal’s MST algorithm in C
├── server.py # Flask backend to run the C code
├── index.html # Web interface for user input
└── README.md # Project documentation

yaml
Copy code

---

## 🚀 How to Run the Project

### Step 1️⃣ — Compile the C backend
```bash
gcc mst_backend.c -o mst_backend
Step 2️⃣ — Start the Flask server
bash
Copy code
python server.py
Step 3️⃣ — Open in your browser
cpp
Copy code
http://127.0.0.1:5000
Step 4️⃣ — Enter data
Input the number of cities

Enter the cost between each city pair (0 if no direct connection)

Click Compute MST
🌍 Real-World Applications
Domain	Example Use
🌐 Telecom Networks	Minimize fiber cable cost
⚡ Power Grid Design	Reduce transmission line expense
🛣️ Transportation Planning	Build minimal road connectivity
💻 Computer Networks	Optimize LAN or data-center wiring
🧰 Tech Stack
Layer	Technology
Algorithm	C (Kruskal’s MST)
Backend	Python (Flask)
Frontend	HTML, CSS, JavaScript
Concept	Greedy Algorithm + Graph Theory
🧩 Real-World Mapping

Each edge weight in the matrix represents:

Cable length (in meters or km)

Cable installation cost (in ₹ or $)

Distance or transmission line cost in power networks

The MST ensures minimum total connection cost while keeping all cities connected.

👨‍💻 Author

Ghost Neo
💡 Developer | CSBS Engineer | Innovator

GitHub: @Gstman420

Email: ghostneo@devmail.com
 (optional)

📜 License

Licensed under the MIT License
 © 2025 Ghost Neo
You are free to use, modify, and distribute this project with attribution.

🌟 Show Your Support

If you found this project helpful:
⭐ Star the repo on GitHub

💬 Share it with your friends or classmates!


---




### ✅ To Add It to Your Repo:
1. Create a new file in your repo → **Add file → Create new file → `README.md`**  
2. Paste the content above  
3. Scroll down → Click **Commit changes**

Your GitHub project will instantly look clean, professional, and ready to showcase 💪  

Would you like me to also generate a **`preview section with images`** (for a screenshot of your web app and terminal output) so your README looks visually rich?
