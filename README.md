# Caesar Cipher Using C

A simple command-line Caesar Cipher encryption and decryption tool written in C.

---

## 🔐 What is Caesar Cipher?

The Caesar Cipher is a classic substitution encryption technique where each letter in the input message is shifted by a fixed number of positions (commonly by 3) in the English alphabet. This program supports both encryption and decryption using that technique.

[more about caesar cipher](https://en.wikipedia.org/wiki/Caesar_cipher)

---

## 🛠️ Tools & Languages Used

<p align="left">
  
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/c/c-original.svg" alt="C language logo" width=60/>

  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/gcc/gcc-original.svg" alt="gcc logo" width=60/>

  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/cmake/cmake-original.svg" alt="Cmake logo" width=60/>

  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/vscode/vscode-original.svg" alt="VS-Code logo" width="60"/>

  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/bash/bash-original.svg" alt="bash-terminal logo" width="60"/>

  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/git/git-original.svg" alt="git logo" width=60/>

  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/github/github-original-wordmark.svg" alt="github logo" width=60/>
          
</p>

## 🖥️ Project Requirements

Before you run the program, make sure you have the following :

- A **C compiler** (e.g., `gcc`)
- The **Make** utility (to build the project using a Makefile)
- A **terminal or shell environment** (macOS, Linux, or Windows using WSL/MinGW)

---

## 🤖 How to Run This On Your Device

### First-Time Setup Instructions

> (Follow these steps when setting up the project for the first time.)

### ⒈ Navigate to Desktop (you can clone in any directory)

`cd Desktop`

### ⒉ Clone the Repository

`git clone https://github.com/manakcodes/caesar-cipher-using-c.git`

---

### 🏹 How to Use

> (Follow these steps to use the caesar cipher every time.)

### ⒈Enter the project directory

`cd ~/Desktop/caesar-cipher-using-c`

### ⒉ Compile the Source Code Using Makefile

`make`

### ⒊ Run the Program

`./CaesarCipher`

### ⒋ Clean Build Artifacts (To remove compiled files and reset the project state)

`make clean`

---

## 🪪 [LICENSE](https://github.com/manakcodes/caesar-cipher-using-c/blob/bd36d6a9c376389ee276c5431889069782137a3e/LICENSE)

## 🌲 Project Tree

<pre>
<code>
.
├── LICENSE
├── Main.c
├── Makefile
├── README.md
└── src
    ├── caesar_cipher.h
    ├── crypt.h
    ├── decrypt_caesar.h
    └── encrypt_caesar.h

2 directories, 8 files
</code>
</pre>

---

🛸 Project Tree Details

<details><summary>📁 Project Tree Details<strong></summary>

- Entry point of the program. Includes all other headers and handles execution flow.
  - [Main.c](https://github.com/manakcodes/caesar-cipher-using-c/blob/bd36d6a9c376389ee276c5431889069782137a3e/Main.c)
- Contains global constants, the CaesarCipher struct, and validation helpers.

  - [src/caesar_cipher.h](https://github.com/manakcodes/caesar-cipher-using-c/blob/bd36d6a9c376389ee276c5431889069782137a3e/src/caesar_cipher.h)

- Implements Caesar Cipher encryption logic.
  - [src/encrypt_caesar.h](https://github.com/manakcodes/caesar-cipher-using-c/blob/bd36d6a9c376389ee276c5431889069782137a3e/src/encrypt_caesar.h)
- Implements Caesar Cipher decryption logic.
  - [src/decrypt_caesar.h](https://github.com/manakcodes/caesar-cipher-using-c/blob/bd36d6a9c376389ee276c5431889069782137a3e/src/decrypt_caesar.h)
- Manages user I/O and CLI interactions, including string input and main crypt logic. - [src/crypt.h](https://github.com/manakcodes/caesar-cipher-using-c/blob/bd36d6a9c376389ee276c5431889069782137a3e/src/crypt.h)
</details>

---
