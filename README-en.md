# mining-raspi

---

## Abstruct

日本語: [README.md](README.md)

This repository was developed in an introduction program of [PEAR Lab](www.is.utsunomiya-u.ac.jp/pearlab/en/A)!

## What is mining-raspi?

"mining-raspi" program calculate nonce value which is used in generating block chain. Before calculating nonce value, this program receive a block and number of zero: number of zero is condition for nonce value. If it succeeds to calculate a nonce value satisfied the condition, it sends nonce value to a server.

## How to build

Let's build "mining-raspi"! First, you clone this repository. Then you execute "make" command in src directory.

```
git clone https://github.com/DeathMarch2018TeamA/mining-raspi
cd mining-raspi/src
make
```

If you build successfully, it's generated execution binary in bin directory.

