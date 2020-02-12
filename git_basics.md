# Git Basics 

Life as a software developer is social and collaborative–sometimes to the point of frustration. That’s why we have git and GitLab.

## What is Git?

Git is version-control software that makes collaboration with teammates super simple.

Git lets you easily keep track of every revision you and your team make during the development of your software.

Basically, if you’re not using git, you’re coding with one hand tied behind your back.

## Required Vocabulary

#### Repository:

Often called as a repo. A repository is the collection of files and folders (code files) that you’re using git to track. It’s the big box you and your team throw your code into.

#### GitLab:

The 2nd most popular remote storage solution for git repos.

#### Commit:

Think of this as saving your work. When you commit to a repository, it’s like you’re taking picture/snapshot of the files as they exist at that moment. The commit will only 
exist on your local machine until it is pushed to a remote repository.

#### Push:

Pushing is essentially syncing your commits to GitLab.

#### Branch:

You can think of your git repo as a tree. The trunk of the tree, the main software, is called the Master Branch. The branches of that tree are, well, called branches. These are separate instances of the code that is different from the main codebase.

#### Merge:

When a branch is free of bugs (as far as you can tell, at least), and ready to become part of the primary codebase, it will get merged into the master branch. Merging is just what it sounds like: integrating two branches together.

#### Clone:

Cloning a repo is pretty much exactly what it sounds like. It takes the entire online repository and makes an exact copy of it on your local machine.

#### Fork:

Forking is a lot like cloning, only instead of making a duplicate of an existing repo on your local machine, you get an entirely new repo of that code under your own name.


## Getting Started and Required Commands
Now that you’ve got a clear idea of what git is, it’s time to dig in and get your hands dirty.

### How to Install Git

Git (probably) didn’t come installed on your computer, so we have to get it there. Luckily, installing git is super easy, whether you’re on Linux, Mac, or Windows.

For Linux, open the terminal and type 
```
sudo apt-get install git-all 
```
**Note** : It only works on Ubuntu. If not, there is a [list of all the Linux package installation commands](https://git-scm.com/download/linux) for whichever other distro you’re on.

On Windows, it’s just as simple. You [download the installer](https://git-scm.com/download/win) and run it.


## Git Internals 

Git has three main states that your files can reside in: modified, staged, and committed :

1. Modified means that you have changed the file but have not committed it to your
repo yet.
2. Staged means that you have marked a modified file in its current version to go into
your next picture/snapshot.
3. Committed means that the data is safely stored in your local repo in form of
pictures/snapshots.

At one time there are 3/4 different trees of your software code/repository are present.

1. Workspace : All the changes you make via Editor(s) (gedit, notepad, vim, nano) is
done in this tree of repository.
2. Staging : All the staged files go into this tree of your repository.
3. Local Repository : All the committed files go to this tree of your repository.
4. Remote Repository : This is the copy of your Local Repository but is stored in some
server on the Internet. All the changes you commit into the Local Repository are
not directly reflected into this tree. You need to push your changes to the Remote
Repository.

![No pic](extras/Git.png)

The picture above shows you the basic commands to move your files into different
trees in your repository.


## Git Workflow 

The basic Git work flow goes something like this:
1. You clone the repo 
```sh
$ git clone <link-to-repository> 
```
1. Create a new branch 
```sh
$ git checkout master
$ git checkout -b <your-branch-name>
```
1. You modify files in your working tree.
1. You selectively stage just those changes you want to be part of your next commit,
which adds only those changes to the staging area.
```sh
$ git add .         # To add untracked files ( . adds all files) 
```
1. You do a commit, which takes the files as they are in the staging area and stores that
snapshot permanently to your Local Git Repository.
```sh
$ git commit -sv   # Description about the commit
```
1. You do a push, which takes the files as they are in the Local Git Repository and stores
that snapshot permanently to your Remote Git Repository.
```sh
$ git push origin <branch-name>      # push changes into repository
```

## For Visual Learners 
Check out this [guide](https://learngitbranching.js.org/)

# Credits
This guide is derived from the awesome works of original creators.
Thanks to all these creators below who made it easy for us to learn the subject.
1. Credits to B.J. Keeton, for his work on git for beginners. [original source](https://www.elegantthemes.com/blog/resources/git-and-github-a-beginners-guide-for-complete-newbies)
2. Credits to git-scm page for the git documentation. [original source](https://git-scm.com/docs/)