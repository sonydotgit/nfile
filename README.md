# nfile
Feed this command with some Directory names and boom!
You'll have the count of files present in those respective directories.

If passed nothing, it'll display the total number of files present in the current working directory (including hidden files).

## Syntax
nfile [path] ...

## Screenshot
![](data/scrnshots/nfile.png)

## Install

```
git clone https://github.com/sonydotgit/nfile.git
```
```
sudo gcc -o /usr/local/bin/nfile nfile/src/decs.c nfile/src/nfile.c
```

