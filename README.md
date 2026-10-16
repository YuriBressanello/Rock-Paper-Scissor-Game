# ROCK PAPER SCISSOR GAME IN C

A simple command-line Rock-Paper-Scissors game written in C, created as a project during my freshman university studies.

---

## Features

- **Input Validation:** Prompts the user continuously until valid choices are provided for both gameplay moves and replay options.
- **Simplified Game Logic:** Uses modular arithmetic to determine the winner without needing verbose nested `if-else` branches.
- **Score Tracking:** Displays running match totals and final scores.

---

## How It Works

The game assigns numeric values to each hand gesture:
- **0** = Rock
- **1** = Paper
- **2** = Scissors

### Core Logic Formula

Instead of checking 9 separate conditions, the game evaluates the outcome using a single mathematical formula:

$$\text{result} = (you - cpu + 3) \pmod 3$$

- **`result == 1`**: You win!
- **`result == 0`**: Draw.
- **`result == 2`**: CPU wins.

*Example:* If you choose **Paper (1)** and the CPU chooses **Rock (0)**:
$$(1 - 0 + 3) \pmod 3 = 4 \pmod 3 = 1 \quad \implies \mathbf{You\ Win!}$$

---

## How to Build and Run

1. Open the terminal and clone the repository:
   ```bash
   git clone https://github.com/YuriBressanello/Rock-Paper-Scissor-Game.git
2. Enter in the directory and write inside the terminal:
   ```bash
   cd Rock-Paper-Scissor-Game
   gcc main.c -o main.exe
4. Run it and enjoy =)
   ```bash
   ./main.exe
