# Strings
# Arrays
# Graphs
### Graph is a non-linear DS consisting of nodes that contain data and are connected to other nodes through edges

### Nodes: An entity to store any data, nodes are circles generally represented by numbers and also referred to as vertices

### Edge: Horizontal line which connects 2 nodes. An edge can be directed as well as undirected

### Two types: Undirected and Directed

### Undirected: A graph where edges are bidirectional with no direction, i.e there will be an undirected edge and the pair of nodes representing that edge is unordered, that means pairs(u, v) and (v, u) represents the same edge.

### Directed: A graph where edges are directed(have direction) from one node to another, i.e there will be an directed edge and the pair of nodes representing that edge is ordered, that means pairs(u, v) and (v, u) represents two different edges.

# Linked-List

# Recursion

# Dynamic Programming

# Tree

# Binary Search Tree

# Real-Life Use Case

## 1. Array 📱 (Pixels on your phone screen)

✅ Example:

Pixels are stored in a 2D array (rows × columns)

Also used in audio buffers, frame data, or color values

📌 Real-world Use:

1) Images (pixel color = value at index)

2) Game boards (like chess)

3) Video frame buffer

## 2. Linked List 📖 (Music playlist in Spotify)

✅ Example:

Your music playlist has songs one after the other

You can add/remove a song from anywhere

📌 Real-world Use:

1) Music/Video queues

2) Undo/Redo feature in Notepad

3) Browser's forward and back navigation

## 3. Stack (LIFO) 🔙 (Back button in browser or apps)

✅ Example:

Every page you visit is pushed onto a stack

Clicking back pops the last page

📌 Real-world Use:

1) App navigation (Android Activities)

2) Undo in MS Word

3) Call stack in Java/Python

## 4. Queue (FIFO) 🖨️ (Print Queue)

✅ Example:

Documents go in a queue to be printed in order

📌 Real-world Use:

1) Task scheduling in OS

2) Messaging queues (RabbitMQ, Kafka)

3) Customer support tickets

## 5. HashMap / HashTable 🔑 (Contacts app)

✅ Example:

You search by name ➝ get phone number instantly

📌 Real-world Use:

1) DNS (Domain ➝ IP Address)

2) Caching (like in browsers)

3) Storing settings in Android/iOS

## 6. Set 🚫 (Detecting duplicate WhatsApp messages)

✅ Example:

Set checks if a message ID already exists

📌 Real-world Use:

1) Removing duplicate songs from playlist

2) Unique usernames in a system

3) Track visited pages in browsing

## 7. Tree 🌳 (File Manager in Phone)

✅ Example:

Internal storage ➝ Folders ➝ Files
That’s a tree!

📌 Real-world Use:

1) File systems (NTFS, ext4)

2) UI elements in Android (View trees)

3) HTML DOM structure

## 8. Graph 🌐 (Google Maps or Facebook Friends)

✅ Example:

Maps = Locations = Nodes
Roads = Edges

📌 Real-world Use:

1) GPS pathfinding

2) Social networks (You ➝ Friends ➝ Friends of Friends)

3) Recommender systems (Netflix, YouTube)

## 9. Heap (Priority Queue) 🏥 (Hospital Emergency Queue)

✅ Example:

Critical patients treated first = Max Heap

📌 Real-world Use:

1) CPU process priority

2) Media players (play high-rated song first)

3) Job scheduling in OS

## 10. Trie 📱 (Autocomplete in Contacts or Google Search)

✅ Example:

You type “Ra” ➝ It shows “Ravi”, “Raj”, “Ram”

📌 Real-world Use:

1) Search engines

2) Auto-correct, predictive text

3) Word suggestion

## ⚙️ ALGORITHMS in Real-World Apps
### 🔁 Recursion

✅ Example:

File search inside folders → subfolders → sub-subfolders

📌 Use in:

1) Tree traversals

2) Maze solving

3) Folder size calculation

### ⚖️ Greedy Algorithm

✅ Example:

Uber route selection: Choose shortest path at each point

📌 Use in:

1) Currency change machines

2) Activity scheduling

3) Huffman encoding

### 💡 Dynamic Programming (DP)

✅ Example:

Typing suggestions use pre-calculated patterns to match words fast

📌 Use in:

1) Keyboard autocorrect

2) Game pathfinding

3) Optimizing app battery usage

### 🧠 Backtracking

✅ Example:

Sudoku Solver apps: Try ➝ If fails ➝ Backtrack ➝ Try again

📌 Use in:

1) Puzzle solvers

2) Code compilers

3) Chess AI move calculation

### 🔍 Binary Search

✅ Example:

Searching a contact from sorted list (scroll bar jumps faster)

📌 Use in:

1) Video seek bars (time slider)

2) Search in sorted data

3) App list lookup (Settings ➝ Search)

### 📊 Sorting Algorithms

✅ Example:

Sorting songs by date, name, artist

📌 Use in:

1) Contact sort

2) Email inbox sort

3) eCommerce product filters

🚪 Sliding Window

✅ Example:

“Last 7 messages” preview in notification = Window moves as new message comes in

📌 Use in:

1) Streaming video/audio buffers

2) Longest substring without repeating characters

3) App performance monitoring

### 👈👉 Two Pointer

✅ Example:

WhatsApp comparing two profile names to check if same from start & end

📌 Use in:

1) Palindrome check

2) Pair sum in sorted arrays

3) Merging sorted contacts