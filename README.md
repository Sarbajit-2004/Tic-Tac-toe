# ❌⭕ Tic Tac Toe Game in C

> A classic **Tic Tac Toe** game built in **C**, designed to strengthen programming fundamentals while exploring simple game development logic in a console environment.  
> Developed as part of my **first-semester college project** — simple, interactive, and fun! 🎮

---

## 🕹️ Features

- 🎭 **Two Game Modes**
  - 👥 **Multiplayer** — Player vs Player
  - 💻 **Single Player** — Player vs Computer (with basic AI)

- 🧠 **Computer AI**
  - Random valid move generation ensures fair gameplay.

- 🧩 **Dynamic 3x3 Board**
  - Updates instantly after every move.

- ✅ **Input Validation**
  - Rejects invalid or duplicate moves automatically.

- 🏁 **Game Results**
  - Announces **Winner** or **Draw** at the end of each match.

---

## 🧩 How to Play

### 1️⃣ Clone the Repository
```bash
git clone https://github.com/yourusername/tictactoe-c.git
cd tictactoe-c
```

### 2️⃣ Compile the Code
```bash
gcc tictactoe.c -o tictactoe
```

### 3️⃣ Run the Game
```bash
./tictactoe
```

### 4️⃣ Follow On-Screen Instructions
Choose your mode and make your move by entering numbers **1–9** corresponding to the board positions.

---

## 🧱 Game Rules

1. The game is played on a **3×3 grid**.  
2. Players take turns marking empty cells with their symbols:  
   - Player 1 → ❌ (X)  
   - Player 2 / Computer → ⭕ (O)  
3. The first player to align **three of their symbols** (horizontally, vertically, or diagonally) **wins**.  
4. If all cells are filled and no player wins, the game ends in a **draw**.  

---

## 💻 Example Gameplay

```
Welcome to Tic Tac Toe!
Choose game mode:
1. Multiplayer (User vs User)
2. Computer vs User
Enter your choice: 2
```

![Menu Screen](https://github.com/user-attachments/assets/885c1e4e-f319-4414-8328-24a223eaf89a)

```
Your turn:
Enter your move (1-9): 5
```

![Gameplay Screen](https://github.com/user-attachments/assets/534e9bff-a70d-49ae-99dc-2b76e030b32a)

```
Computer's turn...
Computer placed O in position 3!
```

---

## 🧠 Code Highlights

### 🗂️ Data Structures
- The **game board** is represented as a 1D array of 9 characters.

### ⚙️ Input Handling
- Ensures players can only enter numbers 1–9, and disallows occupied cells.

### 🏆 Winner Detection
- Checks all rows, columns, and diagonals for a win after every move.

### 🔁 Replay Option
- At the end of each game, players can **choose to replay** without restarting the program.

---

## 🧪 Example Board Layout

```
 1 | 2 | 3
---+---+---
 4 | 5 | 6
---+---+---
 7 | 8 | 9
```

Each number corresponds to a position for player input.

---

## 🧰 Project Details

| Key | Description |
|-----|--------------|
| **Language** | C |
| **Compiler** | GCC |
| **Platform** | Console (Cross-Platform) |
| **File** | `tictactoe.c` |
| **Concepts Used** | Arrays, loops, conditionals, random numbers |

---

## 🎯 Learning Outcomes

- Mastered basic **C programming fundamentals**.  
- Implemented **real-time input validation**.  
- Understood **game logic design** (win/draw conditions).  
- Practiced modular **function-based programming**.  

---

## 🚀 Future Improvements

- 🤖 Add a **smarter AI** using the **Minimax algorithm**.  
- 🖼️ Create a **GUI version** using SDL or GTK.  
- 🧮 Extend to **NxN grids** for advanced gameplay.  
- 💾 Implement **score tracking and leaderboard** persistence.  

---

## 🤝 Contributing

Contributions are welcome!  
If you’d like to improve the gameplay, add smarter AI, or build a UI, feel free to:

1. Fork the repository  
2. Create a new branch  
3. Commit your changes  
4. Submit a pull request  

---

## 👨‍💻 Author

**Sarbajit Kumar De**  
🎓 First Year | CSE  
📧 `sarbajit.dev@outlook.com`  
🌐 [github.com/SarbajitDe](https://github.com/SarbajitDe)

---



---

> _“A small game, a big step in learning — classic Tic Tac Toe reimagined in pure C!”_ 🎯✨
