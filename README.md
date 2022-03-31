# 🔢 Sort Analysis

A command-line tool for analyzing the performance of popular sorting algorithms with graph plots.
<!-- 
![Preview](public/img/screenshot.png) -->

## ✔️ Requirements

Project compatible with unix based operating systems. Written in Ubuntu 20.x.

* g++ compiler
* gnu make
* build-essential
* gnu plot

```bash
sudo apt install g++ build-essential make gnuplot
```
## How to build

- Run make.
```bash
make
```

- Run the app with the proper parameters
    - One Sort algorithm: insertion | shell | merge | quick | bucket | counting
    - Case: (r)andom array | (a)scending order array | (d)escending order array
    - Array size: positive integer
```bash
./bin/app <insertion | shell | merge | quick | bucket | counting> <r | a | d> <array_size>
```

## How to clean the build files
```bash
$> make clean
```

### Usage Example

* Insertion sort with a random array of 1024 positions.
```bash
./bin/app insertion r 1024
```

<!-- 
## ✔️ Configuration

* Change the ... file to ... bla bla bla.

## ✔️ Troubleshooting

 * If ..., check the following:
  - Change A
  - Change B

## 🤔 FAQ

Q: Question.

A: Answer. -->

## 👨‍💻 Maintainers/Contributors

* David Costa - [ds.costa@unesp.br](mailto:ds.costa@unesp.br)
<!-- 
## 📝 License

This project is licensed under the MIT GENERAL PUBLIC LICENSE - see the [LICENSE](LICENSE) file for more details.

**Open Source Software** Hell Yeah!!! ヽ(・∀・)ﾉ -->
