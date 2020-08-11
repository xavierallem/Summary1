# Git 

 Git is a free and open source distributed version control system designed to handle everything from small to very large projects with speed and efficiency.
 It outclasses SCM tools like Subversion, CVS, Perforce, and ClearCase with features like cheap local branching, convenient staging areas, and multiple workflows. 

##  Internals

Git has three main states that your files can reside in

- **Modified** means that you have changed the file but have not committed it to your
repo yet.
- **Staged means** that you have marked a modified file in its current version to go into
your next picture/snapshot.
- **Committed** means that the data is safely stored in your local repo in form of
pictures/snapshots.

![Git](assignments/summary/Assets/gwf.png)

- **Workspace** : All the changes you make via Editor(s) (gedit, notepad, vim, nano) is
done in this tree of repository.
- **Staging** : All the staged files go into this tree of your repository.
- **Local Repository** : All the committed files go to this tree of your repository.
- **Remote Repository** : This is the copy of your Local Repository but is stored in some
server on the Internet. All the changes you commit into the Local Repository are
not directly reflected into this tree. You need to push your changes to the Remote
Repository.

## Barebones Basics

- **Repository(Repo)**:  A repository is the collection of files and folders  that you’re using git to track. 

- **GitLab**: The 2nd most popular remote storage solution for git repos.

- **Commit**:  When you commit to a repository, it’s like you’re taking picture/snapshot of the files as they exist at that moment. 

- **Push**: Pushing is essentially syncing your commits to GitLab.

- **Branch**: An essential concept of Git in general. Each repository can have multiple branches. Each branch can have unique source code.

- **Merge**:  When a branch is free of bugs and ready to become part of the primary codebase, it will get merged into the master branch. Merging is just what it sounds like,
integrating two branches together.

- **Clone**: Cloning a repo is pretty much exactly what it sounds like. It takes the entire online repository and makes an exact copy of it on your local machine.

- **Fork**: Forking is a lot like cloning, only instead of making a duplicate of an existing repo on your local machine.

- **Pull**: This means that you are retrieving new changes from your remote repository and updating them in your local version of the repo. 


## Git Branching

A branch represents an independent line of development

![Git](assignments/summary/Assets/F00b8.png)



## Installing Git

To install Git on Ubuntu 16.04 type the following commands:
```basg
$ sudo apt-get update
$ sudo apt-get install git
```

## Some Basic Commands

- **init** : used to initialze an existing folder as Git repo
```bash
$ git init
```


- **clone** : used to retirive repo using URL
 ```bash
$ git clone url
```


- **status** : shows the modified files in current directory
```bash
$ git status
```


- **add** : add a file to next commit (stage)
```bash
$ git add filename
```


- **rese**t : remove file from (stage)
```bash
$ git reset filename
```


- **commit** : commit staged content as new commit snapshot
```bash
$ git commit -m "commit message"
```


- **branch** :show / create branch
```bash
$ git branch [branch name]
```


- **checkout** : switch to another branch
```bash
$ git checkout [branchname]
```


- **merge** : merge current branch with another
```bash
$ git merge branch name
```


- **log** : display log of all commits in current branch history
```bash
$ git log
```


- **push** : send local branch commit to remote repo
```bash
$ git push [branch]
```

- **rm** : This command deletes the file from your working directory and stages the deletion
```bash
$  git rm [file]
```





