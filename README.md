# Number Guessing Game

This project is a simple console-based number guessing game written in C.

## About the Game

The computer selects a random number between 1 and 10. The user has a total of 5 attempts to guess this number.

### Features
- **Random Number Generation:** A different number is selected each game (1-10).
- **Input Validation:** Invalid inputs (e.g., characters) do not consume attempts.
- **Replayability:** Option to play again after the game ends.

## Installation and Compilation

You need a C compiler (like GCC) to compile this project.

Open a terminal in the project directory and run the following command:

```bash
gcc week5-NumberGuessingGame.c -o numberGuessGame
```

## How to Run

After compilation, you can start the game with the following command:

**For Windows:**
```bash
numberGuessGame.exe
```

**For Linux/Mac:**
```bash
./numberGuessGame
```

## How to Play

1. When you run the program, you will see `Guess:`.
2. Enter a number between 1 and 10 and press ENTER.
3. If your guess is correct, you win.
4. If your guess is wrong, the remaining attempts will be shown.
5. When all attempts are used or if you win, the game asks if you want to play again.
   - Press `1` and ENTER to play again.
   - Enter any other number to exit.

## Developer Notes

This project was created for educational purposes. `srand(time(NULL))` is used to ensure randomness for each run.
